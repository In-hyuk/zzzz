namespace GoodRestaurantAPI
{
    partial class FindID
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
            this.FIDName_label = new System.Windows.Forms.Label();
            this.FIDName_textBox = new System.Windows.Forms.TextBox();
            this.FIDNCheck_button = new System.Windows.Forms.Button();
            this.FId_label = new System.Windows.Forms.Label();
            this.FIDCancel_button = new System.Windows.Forms.Button();
            this.FId_pictureBox = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.FId_pictureBox)).BeginInit();
            this.SuspendLayout();
            // 
            // FIDName_label
            // 
            this.FIDName_label.AutoSize = true;
            this.FIDName_label.Location = new System.Drawing.Point(78, 120);
            this.FIDName_label.Name = "FIDName_label";
            this.FIDName_label.Size = new System.Drawing.Size(29, 12);
            this.FIDName_label.TabIndex = 0;
            this.FIDName_label.Text = "이름";
            // 
            // FIDName_textBox
            // 
            this.FIDName_textBox.Location = new System.Drawing.Point(113, 117);
            this.FIDName_textBox.Name = "FIDName_textBox";
            this.FIDName_textBox.Size = new System.Drawing.Size(100, 21);
            this.FIDName_textBox.TabIndex = 1;
            // 
            // FIDNCheck_button
            // 
            this.FIDNCheck_button.Location = new System.Drawing.Point(113, 186);
            this.FIDNCheck_button.Name = "FIDNCheck_button";
            this.FIDNCheck_button.Size = new System.Drawing.Size(75, 23);
            this.FIDNCheck_button.TabIndex = 2;
            this.FIDNCheck_button.Text = "확인";
            this.FIDNCheck_button.UseVisualStyleBackColor = true;
            this.FIDNCheck_button.Click += new System.EventHandler(this.FNCheckbutton_Click);
            // 
            // FId_label
            // 
            this.FId_label.AutoSize = true;
            this.FId_label.Font = new System.Drawing.Font("굴림", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.FId_label.Location = new System.Drawing.Point(74, 48);
            this.FId_label.Name = "FId_label";
            this.FId_label.Size = new System.Drawing.Size(144, 24);
            this.FId_label.TabIndex = 3;
            this.FId_label.Text = "아이디 찾기";
            // 
            // FIDCancel_button
            // 
            this.FIDCancel_button.Location = new System.Drawing.Point(197, 186);
            this.FIDCancel_button.Name = "FIDCancel_button";
            this.FIDCancel_button.Size = new System.Drawing.Size(75, 23);
            this.FIDCancel_button.TabIndex = 11;
            this.FIDCancel_button.Text = "취소";
            this.FIDCancel_button.UseVisualStyleBackColor = true;
            this.FIDCancel_button.Click += new System.EventHandler(this.CancelFIDbutton_Click);
            // 
            // FId_pictureBox
            // 
            this.FId_pictureBox.Image = global::GoodRestaurantAPI.Properties.Resources.ID찾기;
            this.FId_pictureBox.Location = new System.Drawing.Point(3, 190);
            this.FId_pictureBox.Name = "FId_pictureBox";
            this.FId_pictureBox.Size = new System.Drawing.Size(207, 184);
            this.FId_pictureBox.TabIndex = 12;
            this.FId_pictureBox.TabStop = false;
            // 
            // FindID
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(300, 400);
            this.Controls.Add(this.FIDCancel_button);
            this.Controls.Add(this.FId_label);
            this.Controls.Add(this.FIDNCheck_button);
            this.Controls.Add(this.FIDName_textBox);
            this.Controls.Add(this.FIDName_label);
            this.Controls.Add(this.FId_pictureBox);
            this.MaximumSize = new System.Drawing.Size(300, 400);
            this.MinimumSize = new System.Drawing.Size(300, 400);
            this.Name = "FindID";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "FindID";
            ((System.ComponentModel.ISupportInitialize)(this.FId_pictureBox)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label FIDName_label;
        private System.Windows.Forms.TextBox FIDName_textBox;
        private System.Windows.Forms.Button FIDNCheck_button;
        private System.Windows.Forms.Label FId_label;
        private System.Windows.Forms.Button FIDCancel_button;
        private System.Windows.Forms.PictureBox FId_pictureBox;
    }
}