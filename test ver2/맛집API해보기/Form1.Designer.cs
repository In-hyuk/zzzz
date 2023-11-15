namespace 맛집API해보기
{
    partial class Form1
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

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.donggu_button = new System.Windows.Forms.Button();
            this.bukgu_button = new System.Windows.Forms.Button();
            this.dalseonggun_button = new System.Windows.Forms.Button();
            this.dalseogu_button = new System.Windows.Forms.Button();
            this.seogu_button = new System.Windows.Forms.Button();
            this.namgu_button = new System.Windows.Forms.Button();
            this.suseonggu_button = new System.Windows.Forms.Button();
            this.dalseonggun_button2 = new System.Windows.Forms.Button();
            this.pictureBox2 = new System.Windows.Forms.PictureBox();
            this.junggu_button = new 맛집API해보기.CircularButton();
            this.matjip_stat = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).BeginInit();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(832, 12);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 2;
            this.button1.Text = "button1";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(12, 12);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(119, 36);
            this.button2.TabIndex = 3;
            this.button2.Text = "전체조회 테스트중";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // pictureBox1
            // 
            this.pictureBox1.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(5, 1);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(853, 625);
            this.pictureBox1.TabIndex = 5;
            this.pictureBox1.TabStop = false;
            // 
            // donggu_button
            // 
            this.donggu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.donggu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.donggu_button.FlatAppearance.BorderSize = 0;
            this.donggu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.donggu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.donggu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.donggu_button.Location = new System.Drawing.Point(655, 79);
            this.donggu_button.Name = "donggu_button";
            this.donggu_button.Size = new System.Drawing.Size(99, 165);
            this.donggu_button.TabIndex = 6;
            this.donggu_button.Text = "동구";
            this.donggu_button.UseVisualStyleBackColor = false;
            // 
            // bukgu_button
            // 
            this.bukgu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.bukgu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.bukgu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.bukgu_button.FlatAppearance.BorderSize = 0;
            this.bukgu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.bukgu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.bukgu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.bukgu_button.Location = new System.Drawing.Point(508, 134);
            this.bukgu_button.Name = "bukgu_button";
            this.bukgu_button.Size = new System.Drawing.Size(102, 84);
            this.bukgu_button.TabIndex = 7;
            this.bukgu_button.Text = "북구";
            this.bukgu_button.UseVisualStyleBackColor = false;
            // 
            // dalseonggun_button
            // 
            this.dalseonggun_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.dalseonggun_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button.FlatAppearance.BorderSize = 0;
            this.dalseonggun_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.dalseonggun_button.Location = new System.Drawing.Point(334, 212);
            this.dalseonggun_button.Name = "dalseonggun_button";
            this.dalseonggun_button.Size = new System.Drawing.Size(68, 61);
            this.dalseonggun_button.TabIndex = 8;
            this.dalseonggun_button.Text = "달성군";
            this.dalseonggun_button.UseVisualStyleBackColor = false;
            this.dalseonggun_button.Click += new System.EventHandler(this.dalseong_button_Click);
            // 
            // dalseogu_button
            // 
            this.dalseogu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseogu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.dalseogu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseogu_button.FlatAppearance.BorderSize = 0;
            this.dalseogu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseogu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseogu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.dalseogu_button.Location = new System.Drawing.Point(454, 287);
            this.dalseogu_button.Name = "dalseogu_button";
            this.dalseogu_button.Size = new System.Drawing.Size(73, 46);
            this.dalseogu_button.TabIndex = 9;
            this.dalseogu_button.Text = "달서구";
            this.dalseogu_button.UseVisualStyleBackColor = false;
            // 
            // seogu_button
            // 
            this.seogu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.seogu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.seogu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.seogu_button.FlatAppearance.BorderSize = 0;
            this.seogu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.seogu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.seogu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.seogu_button.Location = new System.Drawing.Point(502, 237);
            this.seogu_button.Name = "seogu_button";
            this.seogu_button.Size = new System.Drawing.Size(39, 30);
            this.seogu_button.TabIndex = 10;
            this.seogu_button.Text = "서구";
            this.seogu_button.UseVisualStyleBackColor = false;
            // 
            // namgu_button
            // 
            this.namgu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.namgu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.namgu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.namgu_button.FlatAppearance.BorderSize = 0;
            this.namgu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.namgu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.namgu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.namgu_button.Location = new System.Drawing.Point(551, 287);
            this.namgu_button.Name = "namgu_button";
            this.namgu_button.Size = new System.Drawing.Size(37, 33);
            this.namgu_button.TabIndex = 11;
            this.namgu_button.Text = "남구";
            this.namgu_button.UseVisualStyleBackColor = false;
            // 
            // suseonggu_button
            // 
            this.suseonggu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.suseonggu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.suseonggu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.suseonggu_button.FlatAppearance.BorderSize = 0;
            this.suseonggu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.suseonggu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.suseonggu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.suseonggu_button.Location = new System.Drawing.Point(607, 287);
            this.suseonggu_button.Name = "suseonggu_button";
            this.suseonggu_button.Size = new System.Drawing.Size(125, 52);
            this.suseonggu_button.TabIndex = 12;
            this.suseonggu_button.Text = "수성구";
            this.suseonggu_button.UseVisualStyleBackColor = false;
            // 
            // dalseonggun_button2
            // 
            this.dalseonggun_button2.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button2.Cursor = System.Windows.Forms.Cursors.Hand;
            this.dalseonggun_button2.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button2.FlatAppearance.BorderSize = 0;
            this.dalseonggun_button2.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button2.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.dalseonggun_button2.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.dalseonggun_button2.Location = new System.Drawing.Point(366, 370);
            this.dalseonggun_button2.Name = "dalseonggun_button2";
            this.dalseonggun_button2.Size = new System.Drawing.Size(121, 134);
            this.dalseonggun_button2.TabIndex = 15;
            this.dalseonggun_button2.Text = "달성군";
            this.dalseonggun_button2.UseVisualStyleBackColor = false;
            this.dalseonggun_button2.Click += new System.EventHandler(this.dalseong_button_Click);
            // 
            // pictureBox2
            // 
            this.pictureBox2.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox2.Image")));
            this.pictureBox2.Location = new System.Drawing.Point(923, 2);
            this.pictureBox2.Name = "pictureBox2";
            this.pictureBox2.Size = new System.Drawing.Size(47, 46);
            this.pictureBox2.TabIndex = 16;
            this.pictureBox2.TabStop = false;
            // 
            // junggu_button
            // 
            this.junggu_button.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.junggu_button.Cursor = System.Windows.Forms.Cursors.Hand;
            this.junggu_button.FlatAppearance.BorderColor = System.Drawing.SystemColors.ButtonHighlight;
            this.junggu_button.FlatAppearance.BorderSize = 0;
            this.junggu_button.FlatAppearance.MouseDownBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.junggu_button.FlatAppearance.MouseOverBackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.junggu_button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.junggu_button.Location = new System.Drawing.Point(559, 257);
            this.junggu_button.Name = "junggu_button";
            this.junggu_button.Size = new System.Drawing.Size(37, 21);
            this.junggu_button.TabIndex = 14;
            this.junggu_button.Text = "중구";
            this.junggu_button.UseVisualStyleBackColor = false;
            // 
            // matjip_stat
            // 
            this.matjip_stat.Location = new System.Drawing.Point(975, 559);
            this.matjip_stat.Name = "matjip_stat";
            this.matjip_stat.Size = new System.Drawing.Size(79, 67);
            this.matjip_stat.TabIndex = 17;
            this.matjip_stat.Text = "대구 맛집 데이터 분석";
            this.matjip_stat.UseVisualStyleBackColor = true;
            this.matjip_stat.Click += new System.EventHandler(this.matjip_stat_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.White;
            this.ClientSize = new System.Drawing.Size(1066, 639);
            this.Controls.Add(this.matjip_stat);
            this.Controls.Add(this.pictureBox2);
            this.Controls.Add(this.dalseonggun_button2);
            this.Controls.Add(this.junggu_button);
            this.Controls.Add(this.suseonggu_button);
            this.Controls.Add(this.namgu_button);
            this.Controls.Add(this.seogu_button);
            this.Controls.Add(this.dalseogu_button);
            this.Controls.Add(this.dalseonggun_button);
            this.Controls.Add(this.bukgu_button);
            this.Controls.Add(this.donggu_button);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.pictureBox1);
            this.Cursor = System.Windows.Forms.Cursors.Arrow;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox2)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button donggu_button;
        private System.Windows.Forms.Button bukgu_button;
        private System.Windows.Forms.Button dalseonggun_button;
        private System.Windows.Forms.Button dalseogu_button;
        private System.Windows.Forms.Button seogu_button;
        private System.Windows.Forms.Button namgu_button;
        private System.Windows.Forms.Button suseonggu_button;
        private CircularButton junggu_button;
        private System.Windows.Forms.Button dalseonggun_button2;
        private System.Windows.Forms.PictureBox pictureBox2;
        private System.Windows.Forms.Button matjip_stat;
    }
}

