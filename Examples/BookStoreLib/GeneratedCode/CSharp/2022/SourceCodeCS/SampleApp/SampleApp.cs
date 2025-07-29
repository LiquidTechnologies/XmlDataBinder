using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;
using LiquidTechnologies.Viewer;

/**********************************************************************************************
 * Copyright (c) 2001-2025 Liquid Technologies Limited. All rights reserved.
 * See www.liquid-technologies.com for product details.
 *
 * Please see products End User License Agreement for distribution permissions.
 *
 * WARNING: THIS FILE IS GENERATED
 * Changes made outside of ##HAND_CODED_BLOCK_START blocks will be overwritten
 *
 * Generation  :  by Liquid XML Data Binder 21.1.0.14151
 * Using Schema: D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\BookStore.xsd
 **********************************************************************************************/

namespace LiquidTechnologies.Test
{
    /// <summary>
    /// Summary description for SampleApp.
    /// </summary>
    public class SampleApp : System.Windows.Forms.Form
    {
        private System.Windows.Forms.Button btnLoad;
        private System.Windows.Forms.Button btnClose;
        private System.Windows.Forms.Label lblInfo;
        private System.Windows.Forms.ListBox lstFiles;
        private System.Windows.Forms.OpenFileDialog openFileDialog;
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.Container components = null;

        #region btnLoad_Click - Opens the selected file - (THIS IS A GOOD PLACE TO START)
        // When an item is selected from the ListBox, this event handler is called.
        // 
        // If you specified Sample files in the Liquid XML wizard then they will be listed
        // in the switch statement.
        // If you did not specify Samples then there are 2 routes forward. You can either
        // use the "Browse for a File to Load", this will load the sample using a generic load
        // method. Alternatively you can run one of the SimpleTestXXXXX("<filename>") methods
        // This will load the file into the correct object, and display it in the viewer.
        private void btnLoad_Click(object sender, System.EventArgs e)
        {
            this.Cursor = Cursors.WaitCursor;

            switch (lstFiles.SelectedIndex)
            {
                case 0:
                    if (openFileDialog.ShowDialog(this) == DialogResult.OK)
                        SimpleTestLoadAnyXmlDocument(openFileDialog.FileName);
                break;
        case 1:
                /* ---------------------------------------------------------------------------------
                 * This will load the sample file 
                 * "..\..\..\..\..\..\..\BookStoreSample.xml"
                 * and demonstrate briefly how to use it.
                 * --------------------------------------------------------------------------------- */
                SimpleTestBookstore(@"..\..\..\..\..\..\..\BookStoreSample.xml");
                break;
            };
            #region UNCOMMENT CODE IN THIS REGION TO LOAD YOUR SAMPLE XML FILES
            /* ---------------------------------------------------------------------------------
             * This function can be used to open an XML document with a document element 
             * (the first element in the file) named 'bookstore' 
             * e.g. 
             *
             * <?xml version="1.0" encoding="UTF-8"?>
             * <bookstore>
             *     ...
             * </bookstore>
             * --------------------------------------------------------------------------------- */
            // SimpleTestBookstore(@"<UNCOMMENT & INSERT A SAMPLE XML FILENAME HERE>");
            
            #endregion
            this.Cursor = Cursors.Default;
        }
        #endregion
    
        #region Sample Functions Demonstrating Reading from an XML File
        #region SimpleTestBookstore - Demo for documents with a root <bookstore>
        // Shows a simple example of how the class Bookstore
        // can be used. This class can be used to load documents whose 
        // root (document) element is <bookstore>.
        private void SimpleTestBookstore(string filename)
        {
            try
            {
                // create an instance of the class to load the XML file into
                BookStoreLib.Bookstore elm = new BookStoreLib.Bookstore();
                
                // load the xml from a file into the object (the root element in the
                // xml document must be <bookstore>.
                elm.FromXmlFile(filename);

                // This will open up a viewer, allowing you to navigate the classes
                // that have been generated. 
                // Note the viewer can be used to modify properties, and provides a listing of
                // the code required to create the document it is displaying.
                SimpleViewer sv = new SimpleViewer(elm);
                sv.ShowDialog();

                // You can then add code to navigate the data held in the class.
                // When navigating this object model you should refer to the documentation
                // generated in the directory:
                // D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\GeneratedCode\CSharp\2022\DocumentationCS\.
                // The help should be compiled into a chm before being used, (use build.bat)
                //- HTML Help Workshop is required to perform this,
                // and can be downloaded from Microsoft. The path to the help compiler (hhc.exe) 
                // may need adjusting in build.bat
                
                // ...

                ////////////////////////////////////////////////////////////////////                
                // The Xml can be extracted from the class using one of 3 methods //
                ////////////////////////////////////////////////////////////////////
                
                // This method will extract the xml into a string. The string is always encoded 
                // using Unicode, there a number of options allowing the headers, 
                // end of line & indenting to be set.
                string strXml = elm.ToXml();
                Console.WriteLine(strXml);
                
                // This method will extract the xml into a file. This method provides options
                // for changing the encoding (UTF-8, UTF-16) as well as headers, 
                // end of line and indenting.
                elm.ToXmlFile(filename + ".testouput.xml");
                
                // This method will extract the xml into a stream. This method provides options
                // for changing the encoding (UTF-8, UTF-16) as well as headers, 
                // end of line and indenting.
                // This method is useful when a specific encoding is required (typically
                // UTF-8), in order to transmit it over an 8-bit connection, smtp etc
                // without the need to write the xml to file first.
                System.IO.Stream stmXml = elm.ToXmlStream();

            }
            catch (Exception e)
            {
                DisplayError(e);
            }
        }
        #endregion

        #region SimpleTestLoadAnyXmlDocument
        // Shows a generic way to load up an XML document.
        private void SimpleTestLoadAnyXmlDocument(string filename)
        {
            try
            {
                // load the xml from a file into the object (the root element in the
                // xml document must be a valid root Element for the schema).
                LiquidTechnologies.Runtime.XmlObjectBase elm = BookStoreLib.ClassFactory.FromXmlFile(filename);

                // This will open up a viewer, allowing you to navigate the classes
                // that have been generated. 
                // Note the viewer can be used to modify properties, and provides a listing of
                // the code required to create the document it is displaying.
                SimpleViewer sv = new SimpleViewer(elm);
                sv.ShowDialog();

                // You can then add code to navigate the data held in the class.
                // When navigating this object model you should refer to the documentation
                // generated in the directory:
                // D:\Development21\Liquid\Applications\XmlDataBinder\Documentation\xml-data-binder\Evaluation\BookStoreDemo\GeneratedCode\CSharp\2022\DocumentationCS\.
                // The help should be compiled into a chm before being used, (use build.bat)
                //- HTML Help Workshop is required to perform this,
                // and can be downloaded from Microsoft. The path to the help compiler (hhc.exe) 
                // may need adjusting in build.bat
                
                // ...

                ////////////////////////////////////////////////////////////////////                
                // The Xml can be extracted from the class using one of 3 methods //
                ////////////////////////////////////////////////////////////////////
                
                // This method will extract the xml into a string. The string is always encoded 
                // using Unicode, there a number of options allowing the headers, 
                // end of line & indenting to be set.
                string strXml = elm.ToXml();
                Console.WriteLine(strXml);
                
                // This method will extract the xml into a file. This method provides options
                // for changing the encoding (UTF-8, UTF-16) as well as headers, 
                // end of line and indenting.
                elm.ToXmlFile(filename + ".testouput.xml");
                
                // This method will extract the xml into a stream. This method provides options
                // for changing the encoding (UTF-8, UTF-16) as well as headers, 
                // end of line and indenting.
                // This method is useful when a specific encoding is required (typically
                // UTF-8), in order to transmit it over an 8-bit connection, smtp etc
                // without the need to write the xml to file first.
                System.IO.Stream stmXml = elm.ToXmlStream();

            }
            catch (Exception e)
            {
                DisplayError(e);
            }
        }
        #endregion
        #endregion

        #region Error Handler
        private void DisplayError(Exception ex)
        {
            string errText = "Error - \n";
            // Note : exceptions are likely to contain inner exceptions
            // that provide further detail about the error.
            while (ex != null)
            {
                errText += ex.Message + "\n";
                ex = ex.InnerException;
            }
            MessageBox.Show(this,  errText, Application.ProductName, MessageBoxButtons.OK, MessageBoxIcon.Error); 
        }
        #endregion

        #region Basic Form Plumbing
        #region SampleApp - Constructor
        public SampleApp()
        {
            //
            // Required for Windows Form Designer support
            //
            InitializeComponent();

            MessageBox.Show(this, "This Sample Application shows the basic serialization mechanism for reading and writing xml documents using Liquid XML Data Binding.\n\n" +
                                "A good place to start examining the code is in SampleApp.cs. If you place a breakpoint in the method btnLoad_Click, then you will be able to step through the code looking at the methods that are called.\n\n" +
                                "After the document loads, a dialog will show the details of what has been loaded. Clicking on nodes in the tree will show the XML data it represents along with example source code (in the code tab) that will help you to understand how to write your real client application.\n\n" +
                                "NOTE: If you are loading a large XML document, although the serialization will be quick the display in the dialog may be slow as it reflects on the whole object model to display the tree.", "Sample Application Information", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
        #endregion 

        #region Dispose
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                if (components != null) 
                {
                    components.Dispose();
                }
            }
            base.Dispose(disposing);
        }
        #endregion

        #region Main
        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        [STAThread]
        static void Main() 
        {
            Application.Run(new SampleApp());
        }
        #endregion 
    
        #region SampleApp_Load - Populates the list box
        private void SampleApp_Load(object sender, System.EventArgs e)
        {
            lblInfo.Text = "All Sample XML Files that you specified in the Wizard will be shown here, see btnLoad_Click(...) method in SampleApp.cs.\n\nSelect the file you want to load into the simple viewer and click the 'Load Selected XML File' button:";
            lstFiles.Items.AddRange(new object[] {
                                                    "Browse for a File to Load"
                                                    , @"..\..\..\..\..\..\..\BookStoreSample.xml"
                                                    });
            lstFiles.SelectedIndex = 0;
        }
        #endregion

        #region btnClose_Click
        private void btnClose_Click(object sender, System.EventArgs e)
        {
            this.Close();
        }
        #endregion
        #endregion

        #region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.btnLoad = new System.Windows.Forms.Button();
            this.btnClose = new System.Windows.Forms.Button();
            this.lblInfo = new System.Windows.Forms.Label();
            this.lstFiles = new System.Windows.Forms.ListBox();
            this.openFileDialog = new System.Windows.Forms.OpenFileDialog();
            this.SuspendLayout();
            // 
            // btnLoad
            // 
            this.btnLoad.Location = new System.Drawing.Point(344, 96);
            this.btnLoad.Name = "btnLoad";
            this.btnLoad.Size = new System.Drawing.Size(96, 48);
            this.btnLoad.TabIndex = 2;
            this.btnLoad.Text = "Load Selected XML File";
            this.btnLoad.Click += new System.EventHandler(this.btnLoad_Click);
            // 
            // btnClose
            // 
            this.btnClose.Location = new System.Drawing.Point(344, 216);
            this.btnClose.Name = "btnClose";
            this.btnClose.Size = new System.Drawing.Size(96, 24);
            this.btnClose.TabIndex = 3;
            this.btnClose.Text = "Close";
            this.btnClose.Click += new System.EventHandler(this.btnClose_Click);
            // 
            // lblInfo
            // 
            this.lblInfo.Location = new System.Drawing.Point(16, 16);
            this.lblInfo.Name = "lblInfo";
            this.lblInfo.Size = new System.Drawing.Size(424, 72);
            this.lblInfo.TabIndex = 0;
            // 
            // lstFiles
            // 
            this.lstFiles.HorizontalScrollbar = true;
            this.lstFiles.Location = new System.Drawing.Point(8, 96);
            this.lstFiles.Name = "lstFiles";
            this.lstFiles.Size = new System.Drawing.Size(328, 134);
            this.lstFiles.TabIndex = 1;
            this.lstFiles.DoubleClick += new System.EventHandler(this.btnLoad_Click);
            // 
            // openFileDialog
            // 
            this.openFileDialog.DefaultExt = "xml";
            this.openFileDialog.Filter = "XML files (*.xml)|*.xml|All files (*.*)|*.*";
            // 
            // SampleApp
            // 
            this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
            this.ClientSize = new System.Drawing.Size(448, 246);
            this.Controls.AddRange(new System.Windows.Forms.Control[] {
                                                                          this.lstFiles,
                                                                          this.lblInfo,
                                                                          this.btnClose,
                                                                          this.btnLoad});
            this.Name = "SampleApp";
            this.Text = "Liquid XML Sample";
            this.Load += new System.EventHandler(this.SampleApp_Load);
            this.ResumeLayout(false);

        }
        #endregion
    }
}

