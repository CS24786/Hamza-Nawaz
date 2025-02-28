namespace FacultyWorkLoadSystem
{
    partial class LoginForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            label1 = new Label();
            textBox1 = new TextBox();
            label2 = new Label();
            textBox2 = new TextBox();
            checkBox1 = new CheckBox();
            linkLabel1 = new LinkLabel();
            button1 = new Button();
            label3 = new Label();
            pnLoginBox = new Panel();
            pnLoginBox.SuspendLayout();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label1.Location = new Point(21, 107);
            label1.Name = "label1";
            label1.Size = new Size(115, 25);
            label1.TabIndex = 0;
            label1.Text = "USERNAME";
            // 
            // textBox1
            // 
            textBox1.Location = new Point(22, 152);
            textBox1.Name = "textBox1";
            textBox1.Size = new Size(309, 23);
            textBox1.TabIndex = 1;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label2.Location = new Point(20, 196);
            label2.Name = "label2";
            label2.Size = new Size(117, 25);
            label2.TabIndex = 2;
            label2.Text = "PASSWORD";
            // 
            // textBox2
            // 
            textBox2.Location = new Point(22, 252);
            textBox2.Name = "textBox2";
            textBox2.Size = new Size(313, 23);
            textBox2.TabIndex = 3;
            // 
            // checkBox1
            // 
            checkBox1.AutoSize = true;
            checkBox1.Location = new Point(26, 296);
            checkBox1.Name = "checkBox1";
            checkBox1.Size = new Size(104, 19);
            checkBox1.TabIndex = 4;
            checkBox1.Text = "Remember me";
            checkBox1.UseVisualStyleBackColor = true;
            // 
            // linkLabel1
            // 
            linkLabel1.AutoSize = true;
            linkLabel1.Location = new Point(241, 300);
            linkLabel1.Name = "linkLabel1";
            linkLabel1.Size = new Size(94, 15);
            linkLabel1.TabIndex = 5;
            linkLabel1.TabStop = true;
            linkLabel1.Text = "Forget Password";
            // 
            // button1
            // 
            button1.BackColor = SystemColors.ButtonFace;
            button1.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            button1.ForeColor = SystemColors.ButtonShadow;
            button1.Location = new Point(82, 343);
            button1.Name = "button1";
            button1.Size = new Size(175, 37);
            button1.TabIndex = 6;
            button1.Text = "SIGN IN";
            button1.UseVisualStyleBackColor = false;
            button1.Click += button1_Click;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 15.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label3.Location = new Point(45, 0);
            label3.Name = "label3";
            label3.Size = new Size(266, 90);
            label3.TabIndex = 7;
            label3.Text = "          LOGIN FORM\r\nFACULTY MANAGEMENT \r\n            SYSTEM";
            // 
            // pnLoginBox
            // 
            pnLoginBox.BackColor = SystemColors.GradientActiveCaption;
            pnLoginBox.BorderStyle = BorderStyle.FixedSingle;
            pnLoginBox.Controls.Add(label3);
            pnLoginBox.Controls.Add(button1);
            pnLoginBox.Controls.Add(linkLabel1);
            pnLoginBox.Controls.Add(checkBox1);
            pnLoginBox.Controls.Add(textBox2);
            pnLoginBox.Controls.Add(label2);
            pnLoginBox.Controls.Add(textBox1);
            pnLoginBox.Controls.Add(label1);
            pnLoginBox.Location = new Point(279, 26);
            pnLoginBox.Name = "pnLoginBox";
            pnLoginBox.Size = new Size(352, 414);
            pnLoginBox.TabIndex = 8;
            // 
            // LoginForm
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = SystemColors.InactiveCaption;
            ClientSize = new Size(1155, 450);
            Controls.Add(pnLoginBox);
            FormBorderStyle = FormBorderStyle.FixedSingle;
            Name = "LoginForm";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Faculty Workload and Resource Allocation System";
            pnLoginBox.ResumeLayout(false);
            pnLoginBox.PerformLayout();
            ResumeLayout(false);
        }

        #endregion

        private Label label1;
        private TextBox textBox1;
        private Label label2;
        private TextBox textBox2;
        private CheckBox checkBox1;
        private LinkLabel linkLabel1;
        private Button button1;
        private Label label3;
        private Panel pnLoginBox;
    }
}