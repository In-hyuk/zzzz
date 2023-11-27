namespace GoodRestaurantAPI
{
    partial class Login
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
            this.LoginID_textBox = new System.Windows.Forms.TextBox();
            this.LoginPWD_textBox = new System.Windows.Forms.TextBox();
            this.Login_button = new System.Windows.Forms.Button();
            this.PWD_linkLabel = new System.Windows.Forms.LinkLabel();
            this.SignUp_linkLabel = new System.Windows.Forms.LinkLabel();
            this.LoginId_label = new System.Windows.Forms.Label();
            this.LoginPWD_label = new System.Windows.Forms.Label();
            this.LoginCancel_button = new System.Windows.Forms.Button();
            this.ID_linkLabel = new System.Windows.Forms.LinkLabel();
            this.Login_pictureBox = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.Login_pictureBox)).BeginInit();
            this.SuspendLayout();
            // 
            // LoginID_textBox
            // 
            this.LoginID_textBox.Location = new System.Drawing.Point(233, 182);
            this.LoginID_textBox.Name = "LoginID_textBox";
            this.LoginID_textBox.Size = new System.Drawing.Size(150, 21);
            this.LoginID_textBox.TabIndex = 0;
            // 
            // LoginPWD_textBox
            // 
            this.LoginPWD_textBox.Location = new System.Drawing.Point(233, 217);
            this.LoginPWD_textBox.Name = "LoginPWD_textBox";
            this.LoginPWD_textBox.Size = new System.Drawing.Size(150, 21);
            this.LoginPWD_textBox.TabIndex = 1;
            this.LoginPWD_textBox.UseSystemPasswordChar = true;
            // 
            // Login_button
            // 
            this.Login_button.Location = new System.Drawing.Point(401, 182);
            this.Login_button.Name = "Login_button";
            this.Login_button.Size = new System.Drawing.Size(65, 56);
            this.Login_button.TabIndex = 3;
            this.Login_button.Text = "로그인";
            this.Login_button.UseVisualStyleBackColor = true;
            // 
            // PWD_linkLabel
            // 
            this.PWD_linkLabel.AutoSize = true;
            this.PWD_linkLabel.Location = new System.Drawing.Point(338, 275);
            this.PWD_linkLabel.Name = "PWD_linkLabel";
            this.PWD_linkLabel.Size = new System.Drawing.Size(77, 12);
            this.PWD_linkLabel.TabIndex = 4;
            this.PWD_linkLabel.TabStop = true;
            this.PWD_linkLabel.Text = "비밀번호찾기";
            this.PWD_linkLabel.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linkLabelPWD_LinkClicked);
            // 
            // SignUp_linkLabel
            // 
            this.SignUp_linkLabel.AutoSize = true;
            this.SignUp_linkLabel.Location = new System.Drawing.Point(431, 275);
            this.SignUp_linkLabel.Name = "SignUp_linkLabel";
            this.SignUp_linkLabel.Size = new System.Drawing.Size(53, 12);
            this.SignUp_linkLabel.TabIndex = 5;
            this.SignUp_linkLabel.TabStop = true;
            this.SignUp_linkLabel.Text = "회원가입";
            this.SignUp_linkLabel.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linkLabelSign_LinkClicked);
            // 
            // LoginId_label
            // 
            this.LoginId_label.AutoSize = true;
            this.LoginId_label.Location = new System.Drawing.Point(186, 185);
            this.LoginId_label.Name = "LoginId_label";
            this.LoginId_label.Size = new System.Drawing.Size(41, 12);
            this.LoginId_label.TabIndex = 6;
            this.LoginId_label.Text = "아이디";
            // 
            // LoginPWD_label
            // 
            this.LoginPWD_label.AutoSize = true;
            this.LoginPWD_label.Location = new System.Drawing.Point(174, 220);
            this.LoginPWD_label.Name = "LoginPWD_label";
            this.LoginPWD_label.Size = new System.Drawing.Size(53, 12);
            this.LoginPWD_label.TabIndex = 7;
            this.LoginPWD_label.Text = "비밀번호";
            // 
            // LoginCancel_button
            // 
            this.LoginCancel_button.Location = new System.Drawing.Point(481, 182);
            this.LoginCancel_button.Name = "LoginCancel_button";
            this.LoginCancel_button.Size = new System.Drawing.Size(63, 56);
            this.LoginCancel_button.TabIndex = 8;
            this.LoginCancel_button.Text = "종료";
            this.LoginCancel_button.UseVisualStyleBackColor = true;
            // 
            // ID_linkLabel
            // 
            this.ID_linkLabel.AutoSize = true;
            this.ID_linkLabel.Location = new System.Drawing.Point(255, 275);
            this.ID_linkLabel.Name = "ID_linkLabel";
            this.ID_linkLabel.Size = new System.Drawing.Size(65, 12);
            this.ID_linkLabel.TabIndex = 9;
            this.ID_linkLabel.TabStop = true;
            this.ID_linkLabel.Text = "아이디찾기";
            this.ID_linkLabel.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.linkLabelID_LinkClicked);
            // 
            // Login_pictureBox
            // 
            this.Login_pictureBox.Image = global::GoodRestaurantAPI.Properties.Resources.맛집쓰_로고;
            this.Login_pictureBox.Location = new System.Drawing.Point(161, 16);
            this.Login_pictureBox.Name = "Login_pictureBox";
            this.Login_pictureBox.Size = new System.Drawing.Size(406, 152);
            this.Login_pictureBox.TabIndex = 10;
            this.Login_pictureBox.TabStop = false;
            // 
            // Login
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.Control;
            this.ClientSize = new System.Drawing.Size(708, 386);
            this.Controls.Add(this.Login_pictureBox);
            this.Controls.Add(this.ID_linkLabel);
            this.Controls.Add(this.LoginCancel_button);
            this.Controls.Add(this.LoginPWD_label);
            this.Controls.Add(this.LoginId_label);
            this.Controls.Add(this.SignUp_linkLabel);
            this.Controls.Add(this.PWD_linkLabel);
            this.Controls.Add(this.Login_button);
            this.Controls.Add(this.LoginPWD_textBox);
            this.Controls.Add(this.LoginID_textBox);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "Login";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Login";
            ((System.ComponentModel.ISupportInitialize)(this.Login_pictureBox)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox LoginID_textBox;
        private System.Windows.Forms.TextBox LoginPWD_textBox;
        private System.Windows.Forms.Button Login_button;
        private System.Windows.Forms.LinkLabel PWD_linkLabel;
        private System.Windows.Forms.LinkLabel SignUp_linkLabel;
        private System.Windows.Forms.Label LoginId_label;
        private System.Windows.Forms.Label LoginPWD_label;
        private System.Windows.Forms.Button LoginCancel_button;
        private System.Windows.Forms.LinkLabel ID_linkLabel;
        private System.Windows.Forms.PictureBox Login_pictureBox;
    }
}