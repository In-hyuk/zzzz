namespace GoodRestaurantAPI
{
    partial class Sign_Up
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
            this.SignUp_label = new System.Windows.Forms.Label();
            this.SignUpID_label = new System.Windows.Forms.Label();
            this.SignUpPWD_label = new System.Windows.Forms.Label();
            this.SignUpName_label = new System.Windows.Forms.Label();
            this.SignUpQues_label = new System.Windows.Forms.Label();
            this.SignUpID_textBox = new System.Windows.Forms.TextBox();
            this.SignUpPWD_textBox = new System.Windows.Forms.TextBox();
            this.SignUpName_textBox = new System.Windows.Forms.TextBox();
            this.SignUpQues_textBox = new System.Windows.Forms.TextBox();
            this.DCheckID_button = new System.Windows.Forms.Button();
            this.SignUpCheck_button = new System.Windows.Forms.Button();
            this.SignUpCancel_button = new System.Windows.Forms.Button();
            this.SignUp_pictureBox = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.SignUp_pictureBox)).BeginInit();
            this.SuspendLayout();
            // 
            // SignUp_label
            // 
            this.SignUp_label.AutoSize = true;
            this.SignUp_label.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.SignUp_label.Location = new System.Drawing.Point(162, 46);
            this.SignUp_label.Name = "SignUp_label";
            this.SignUp_label.Size = new System.Drawing.Size(110, 24);
            this.SignUp_label.TabIndex = 0;
            this.SignUp_label.Text = "회원가입";
            // 
            // SignUpID_label
            // 
            this.SignUpID_label.AutoSize = true;
            this.SignUpID_label.Location = new System.Drawing.Point(102, 143);
            this.SignUpID_label.Name = "SignUpID_label";
            this.SignUpID_label.Size = new System.Drawing.Size(41, 12);
            this.SignUpID_label.TabIndex = 1;
            this.SignUpID_label.Text = "아이디";
            // 
            // SignUpPWD_label
            // 
            this.SignUpPWD_label.AutoSize = true;
            this.SignUpPWD_label.Location = new System.Drawing.Point(85, 182);
            this.SignUpPWD_label.Name = "SignUpPWD_label";
            this.SignUpPWD_label.Size = new System.Drawing.Size(53, 12);
            this.SignUpPWD_label.TabIndex = 2;
            this.SignUpPWD_label.Text = "비밀번호";
            // 
            // SignUpName_label
            // 
            this.SignUpName_label.AutoSize = true;
            this.SignUpName_label.Location = new System.Drawing.Point(102, 235);
            this.SignUpName_label.Name = "SignUpName_label";
            this.SignUpName_label.Size = new System.Drawing.Size(29, 12);
            this.SignUpName_label.TabIndex = 3;
            this.SignUpName_label.Text = "이름";
            // 
            // SignUpQues_label
            // 
            this.SignUpQues_label.AutoSize = true;
            this.SignUpQues_label.Location = new System.Drawing.Point(24, 282);
            this.SignUpQues_label.Name = "SignUpQues_label";
            this.SignUpQues_label.Size = new System.Drawing.Size(127, 12);
            this.SignUpQues_label.TabIndex = 4;
            this.SignUpQues_label.Text = "가장 좋아하는 여행지?";
            // 
            // SignUpID_textBox
            // 
            this.SignUpID_textBox.Location = new System.Drawing.Point(169, 134);
            this.SignUpID_textBox.Name = "SignUpID_textBox";
            this.SignUpID_textBox.Size = new System.Drawing.Size(100, 21);
            this.SignUpID_textBox.TabIndex = 5;
            // 
            // SignUpPWD_textBox
            // 
            this.SignUpPWD_textBox.Location = new System.Drawing.Point(170, 179);
            this.SignUpPWD_textBox.Name = "SignUpPWD_textBox";
            this.SignUpPWD_textBox.Size = new System.Drawing.Size(100, 21);
            this.SignUpPWD_textBox.TabIndex = 6;
            this.SignUpPWD_textBox.UseSystemPasswordChar = true;
            // 
            // SignUpName_textBox
            // 
            this.SignUpName_textBox.Location = new System.Drawing.Point(169, 229);
            this.SignUpName_textBox.Name = "SignUpName_textBox";
            this.SignUpName_textBox.Size = new System.Drawing.Size(100, 21);
            this.SignUpName_textBox.TabIndex = 7;
            // 
            // SignUpQues_textBox
            // 
            this.SignUpQues_textBox.Location = new System.Drawing.Point(169, 275);
            this.SignUpQues_textBox.Name = "SignUpQues_textBox";
            this.SignUpQues_textBox.Size = new System.Drawing.Size(100, 21);
            this.SignUpQues_textBox.TabIndex = 8;
            // 
            // DCheckID_button
            // 
            this.DCheckID_button.Location = new System.Drawing.Point(285, 134);
            this.DCheckID_button.Name = "DCheckID_button";
            this.DCheckID_button.Size = new System.Drawing.Size(75, 23);
            this.DCheckID_button.TabIndex = 9;
            this.DCheckID_button.Text = "중복체크";
            this.DCheckID_button.UseVisualStyleBackColor = true;
            this.DCheckID_button.Click += new System.EventHandler(this.DCheckbutton_Click);
            // 
            // SignUpCheck_button
            // 
            this.SignUpCheck_button.Location = new System.Drawing.Point(252, 351);
            this.SignUpCheck_button.Name = "SignUpCheck_button";
            this.SignUpCheck_button.Size = new System.Drawing.Size(75, 23);
            this.SignUpCheck_button.TabIndex = 10;
            this.SignUpCheck_button.Text = "확인";
            this.SignUpCheck_button.UseVisualStyleBackColor = true;
            this.SignUpCheck_button.Click += new System.EventHandler(this.Checkbutton_Click);
            // 
            // SignUpCancel_button
            // 
            this.SignUpCancel_button.Location = new System.Drawing.Point(336, 351);
            this.SignUpCancel_button.Name = "SignUpCancel_button";
            this.SignUpCancel_button.Size = new System.Drawing.Size(75, 23);
            this.SignUpCancel_button.TabIndex = 11;
            this.SignUpCancel_button.Text = "취소";
            this.SignUpCancel_button.UseVisualStyleBackColor = true;
            this.SignUpCancel_button.Click += new System.EventHandler(this.Cancelbutton_Click);
            // 
            // SignUp_pictureBox
            // 
            this.SignUp_pictureBox.Image = global::GoodRestaurantAPI.Properties.Resources.칭구칭긔;
            this.SignUp_pictureBox.Location = new System.Drawing.Point(-2, 323);
            this.SignUp_pictureBox.Name = "SignUp_pictureBox";
            this.SignUp_pictureBox.Size = new System.Drawing.Size(437, 369);
            this.SignUp_pictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.SignUp_pictureBox.TabIndex = 12;
            this.SignUp_pictureBox.TabStop = false;
            // 
            // Sign_Up
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(450, 700);
            this.Controls.Add(this.SignUpCancel_button);
            this.Controls.Add(this.SignUpCheck_button);
            this.Controls.Add(this.DCheckID_button);
            this.Controls.Add(this.SignUpQues_textBox);
            this.Controls.Add(this.SignUpName_textBox);
            this.Controls.Add(this.SignUpPWD_textBox);
            this.Controls.Add(this.SignUpID_textBox);
            this.Controls.Add(this.SignUpQues_label);
            this.Controls.Add(this.SignUpName_label);
            this.Controls.Add(this.SignUpPWD_label);
            this.Controls.Add(this.SignUpID_label);
            this.Controls.Add(this.SignUp_label);
            this.Controls.Add(this.SignUp_pictureBox);
            this.MaximumSize = new System.Drawing.Size(450, 700);
            this.MinimumSize = new System.Drawing.Size(450, 700);
            this.Name = "Sign_Up";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Sign_Up";
            ((System.ComponentModel.ISupportInitialize)(this.SignUp_pictureBox)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label SignUp_label;
        private System.Windows.Forms.Label SignUpID_label;
        private System.Windows.Forms.Label SignUpPWD_label;
        private System.Windows.Forms.Label SignUpName_label;
        private System.Windows.Forms.Label SignUpQues_label;
        private System.Windows.Forms.TextBox SignUpID_textBox;
        private System.Windows.Forms.TextBox SignUpPWD_textBox;
        private System.Windows.Forms.TextBox SignUpName_textBox;
        private System.Windows.Forms.TextBox SignUpQues_textBox;
        private System.Windows.Forms.Button DCheckID_button;
        private System.Windows.Forms.Button SignUpCheck_button;
        private System.Windows.Forms.Button SignUpCancel_button;
        private System.Windows.Forms.PictureBox SignUp_pictureBox;
    }
}