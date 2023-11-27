namespace GoodRestaurantAPI
{
    partial class MyPlace
    {
        /// <summary> 
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary> 
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region 구성 요소 디자이너에서 생성한 코드

        /// <summary> 
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MyPlace));
            this.User_label = new System.Windows.Forms.Label();
            this.MyPlace_dataGridView = new System.Windows.Forms.DataGridView();
            this.DelMyPlaceLabel_pictureBox = new System.Windows.Forms.PictureBox();
            this.DelMyPlace_button = new System.Windows.Forms.Button();
            this.MyPlace_pictureBox = new System.Windows.Forms.PictureBox();
            ((System.ComponentModel.ISupportInitialize)(this.MyPlace_dataGridView)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.DelMyPlaceLabel_pictureBox)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.MyPlace_pictureBox)).BeginInit();
            this.SuspendLayout();
            // 
            // User_label
            // 
            this.User_label.AutoSize = true;
            this.User_label.BackColor = System.Drawing.Color.White;
            this.User_label.Font = new System.Drawing.Font("굴림", 30F, System.Drawing.FontStyle.Bold);
            this.User_label.Location = new System.Drawing.Point(45, 73);
            this.User_label.Name = "User_label";
            this.User_label.Size = new System.Drawing.Size(0, 40);
            this.User_label.TabIndex = 0;
            // 
            // MyPlace_dataGridView
            // 
            this.MyPlace_dataGridView.AllowUserToAddRows = false;
            this.MyPlace_dataGridView.AllowUserToDeleteRows = false;
            this.MyPlace_dataGridView.AllowUserToOrderColumns = true;
            this.MyPlace_dataGridView.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.MyPlace_dataGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.MyPlace_dataGridView.Location = new System.Drawing.Point(34, 296);
            this.MyPlace_dataGridView.Name = "MyPlace_dataGridView";
            this.MyPlace_dataGridView.ReadOnly = true;
            this.MyPlace_dataGridView.RowTemplate.Height = 23;
            this.MyPlace_dataGridView.Size = new System.Drawing.Size(582, 242);
            this.MyPlace_dataGridView.TabIndex = 1;
            // 
            // DelMyPlaceLabel_pictureBox
            // 
            this.DelMyPlaceLabel_pictureBox.BackColor = System.Drawing.Color.White;
            this.DelMyPlaceLabel_pictureBox.Image = global::GoodRestaurantAPI.Properties.Resources.삭제1;
            this.DelMyPlaceLabel_pictureBox.Location = new System.Drawing.Point(540, 166);
            this.DelMyPlaceLabel_pictureBox.Name = "DelMyPlaceLabel_pictureBox";
            this.DelMyPlaceLabel_pictureBox.Size = new System.Drawing.Size(57, 36);
            this.DelMyPlaceLabel_pictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.DelMyPlaceLabel_pictureBox.TabIndex = 4;
            this.DelMyPlaceLabel_pictureBox.TabStop = false;
            // 
            // DelMyPlace_button
            // 
            this.DelMyPlace_button.BackColor = System.Drawing.Color.White;
            this.DelMyPlace_button.BackgroundImage = global::GoodRestaurantAPI.Properties.Resources.제목을_입력해주세요__002;
            this.DelMyPlace_button.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.DelMyPlace_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.DelMyPlace_button.FlatAppearance.BorderSize = 0;
            this.DelMyPlace_button.FlatAppearance.MouseDownBackColor = System.Drawing.Color.Transparent;
            this.DelMyPlace_button.FlatAppearance.MouseOverBackColor = System.Drawing.Color.Transparent;
            this.DelMyPlace_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.DelMyPlace_button.Location = new System.Drawing.Point(535, 208);
            this.DelMyPlace_button.Name = "DelMyPlace_button";
            this.DelMyPlace_button.Size = new System.Drawing.Size(57, 53);
            this.DelMyPlace_button.TabIndex = 2;
            this.DelMyPlace_button.UseVisualStyleBackColor = false;
            this.DelMyPlace_button.Click += new System.EventHandler(this.Delete_button_Click);
            // 
            // MyPlace_pictureBox
            // 
            this.MyPlace_pictureBox.Image = ((System.Drawing.Image)(resources.GetObject("MyPlace_pictureBox.Image")));
            this.MyPlace_pictureBox.Location = new System.Drawing.Point(34, 44);
            this.MyPlace_pictureBox.Name = "MyPlace_pictureBox";
            this.MyPlace_pictureBox.Size = new System.Drawing.Size(582, 233);
            this.MyPlace_pictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage;
            this.MyPlace_pictureBox.TabIndex = 3;
            this.MyPlace_pictureBox.TabStop = false;
            // 
            // MyPlace
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.Control;
            this.Controls.Add(this.DelMyPlaceLabel_pictureBox);
            this.Controls.Add(this.DelMyPlace_button);
            this.Controls.Add(this.MyPlace_dataGridView);
            this.Controls.Add(this.User_label);
            this.Controls.Add(this.MyPlace_pictureBox);
            this.Name = "MyPlace";
            this.Size = new System.Drawing.Size(680, 580);
            ((System.ComponentModel.ISupportInitialize)(this.MyPlace_dataGridView)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.DelMyPlaceLabel_pictureBox)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.MyPlace_pictureBox)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label User_label;
        private System.Windows.Forms.DataGridView MyPlace_dataGridView;
        private System.Windows.Forms.Button DelMyPlace_button;
        private System.Windows.Forms.PictureBox MyPlace_pictureBox;
        private System.Windows.Forms.PictureBox DelMyPlaceLabel_pictureBox;
    }
}
