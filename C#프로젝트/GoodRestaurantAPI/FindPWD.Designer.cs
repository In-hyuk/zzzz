namespace GoodRestaurantAPI
{
    partial class FindPWD
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
            this.FPWD_label = new System.Windows.Forms.Label();
            this.FPWDNCheck_button = new System.Windows.Forms.Button();
            this.FPWDName_textBox = new System.Windows.Forms.TextBox();
            this.FPWDID_label = new System.Windows.Forms.Label();
            this.FPWDQ_textBox = new System.Windows.Forms.TextBox();
            this.FPWDQ_label = new System.Windows.Forms.Label();
            this.FPWDCancel_button = new System.Windows.Forms.Button();
            this.FPWD_pictureBox = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.FPWD_pictureBox)).BeginInit();
            this.SuspendLayout();
            // 
            // FPWD_label
            // 
            this.FPWD_label.AutoSize = true;
            this.FPWD_label.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.FPWD_label.Location = new System.Drawing.Point(56, 47);
            this.FPWD_label.Name = "FPWD_label";
            this.FPWD_label.Size = new System.Drawing.Size(169, 24);
            this.FPWD_label.TabIndex = 4;
            this.FPWD_label.Text = "비밀번호 찾기";
            // 
            // FPWDNCheck_button
            // 
            this.FPWDNCheck_button.Location = new System.Drawing.Point(113, 186);
            this.FPWDNCheck_button.Name = "FPWDNCheck_button";
            this.FPWDNCheck_button.Size = new System.Drawing.Size(75, 23);
            this.FPWDNCheck_button.TabIndex = 7;
            this.FPWDNCheck_button.Text = "확인";
            this.FPWDNCheck_button.UseVisualStyleBackColor = true;
            this.FPWDNCheck_button.Click += new System.EventHandler(this.FNCheckbutton_Click);
            // 
            // FPWDName_textBox
            // 
            this.FPWDName_textBox.Location = new System.Drawing.Point(150, 113);
            this.FPWDName_textBox.Name = "FPWDName_textBox";
            this.FPWDName_textBox.Size = new System.Drawing.Size(100, 21);
            this.FPWDName_textBox.TabIndex = 6;
            // 
            // FPWDID_label
            // 
            this.FPWDID_label.AutoSize = true;
            this.FPWDID_label.Location = new System.Drawing.Point(93, 116);
            this.FPWDID_label.Name = "FPWDID_label";
            this.FPWDID_label.Size = new System.Drawing.Size(41, 12);
            this.FPWDID_label.TabIndex = 5;
            this.FPWDID_label.Text = "아이디";
            // 
            // FPWDQ_textBox
            // 
            this.FPWDQ_textBox.Location = new System.Drawing.Point(150, 150);
            this.FPWDQ_textBox.Name = "FPWDQ_textBox";
            this.FPWDQ_textBox.Size = new System.Drawing.Size(100, 21);
            this.FPWDQ_textBox.TabIndex = 9;
            // 
            // FPWDQ_label
            // 
            this.FPWDQ_label.AutoSize = true;
            this.FPWDQ_label.Location = new System.Drawing.Point(15, 153);
            this.FPWDQ_label.Name = "FPWDQ_label";
            this.FPWDQ_label.Size = new System.Drawing.Size(127, 12);
            this.FPWDQ_label.TabIndex = 8;
            this.FPWDQ_label.Text = "가장 좋아하는 여행지?";
            // 
            // FPWDCancel_button
            // 
            this.FPWDCancel_button.Location = new System.Drawing.Point(201, 186);
            this.FPWDCancel_button.Name = "FPWDCancel_button";
            this.FPWDCancel_button.Size = new System.Drawing.Size(75, 23);
            this.FPWDCancel_button.TabIndex = 10;
            this.FPWDCancel_button.Text = "취소";
            this.FPWDCancel_button.UseVisualStyleBackColor = true;
            this.FPWDCancel_button.Click += new System.EventHandler(this.CancelFPWDbutton_Click);
            // 
            // FPWD_pictureBox
            // 
            this.FPWD_pictureBox.Image = global::GoodRestaurantAPI.Properties.Resources.비밀번호찾기;
            this.FPWD_pictureBox.Location = new System.Drawing.Point(8, 174);
            this.FPWD_pictureBox.Name = "FPWD_pictureBox";
            this.FPWD_pictureBox.Size = new System.Drawing.Size(212, 192);
            this.FPWD_pictureBox.TabIndex = 11;
            this.FPWD_pictureBox.TabStop = false;
            // 
            // FindPWD
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(300, 400);
            this.Controls.Add(this.FPWDCancel_button);
            this.Controls.Add(this.FPWDQ_textBox);
            this.Controls.Add(this.FPWDQ_label);
            this.Controls.Add(this.FPWDNCheck_button);
            this.Controls.Add(this.FPWDName_textBox);
            this.Controls.Add(this.FPWDID_label);
            this.Controls.Add(this.FPWD_label);
            this.Controls.Add(this.FPWD_pictureBox);
            this.MaximumSize = new System.Drawing.Size(300, 400);
            this.MinimumSize = new System.Drawing.Size(300, 400);
            this.Name = "FindPWD";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "FindPWD";
            ((System.ComponentModel.ISupportInitialize)(this.FPWD_pictureBox)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label FPWD_label;
        private System.Windows.Forms.Button FPWDNCheck_button;
        private System.Windows.Forms.TextBox FPWDName_textBox;
        private System.Windows.Forms.Label FPWDID_label;
        private System.Windows.Forms.TextBox FPWDQ_textBox;
        private System.Windows.Forms.Label FPWDQ_label;
        private System.Windows.Forms.Button FPWDCancel_button;
        private System.Windows.Forms.PictureBox FPWD_pictureBox;
    }
}