<!DOCTYPE html>
<html lang="id">
<head>

<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">

<title>Form Order Undangan Website</title>

<style>

* {
    box-sizing: border-box;
    margin: 0;
    padding: 0;
}

body {
    font-family: Arial, Helvetica, sans-serif;
    background: #f6f7f9;
    color: #333;
    padding: 30px 15px;
}

.container {
    width: 100%;
    max-width: 850px;
    margin: auto;
}

/* HEADER */

.header {
    text-align: center;
    margin-bottom: 30px;
}

.header h1 {
    font-size: 30px;
    margin-bottom: 8px;
    color: #222;
}

.header p {
    color: #777;
    font-size: 14px;
    line-height: 1.6;
}

/* CARD */

.card {
    background: #fff;
    border-radius: 18px;
    padding: 25px;
    margin-bottom: 20px;
    box-shadow: 0 5px 25px rgba(0,0,0,.06);
}

.card-title {
    font-size: 19px;
    font-weight: bold;
    margin-bottom: 20px;
}

/* KATEGORI */

.kategori {
    display: grid;
    grid-template-columns: repeat(4, 1fr);
    gap: 12px;
}

.kategori-item {
    border: 1px solid #ddd;
    border-radius: 12px;
    padding: 15px 10px;
    text-align: center;
    cursor: pointer;
    background: #fff;
    transition: .2s;
    font-size: 14px;
}

.kategori-item:hover {
    border-color: #222;
    transform: translateY(-2px);
}

.kategori-item.active {
    background: #222;
    color: #fff;
    border-color: #222;
}

.kategori-icon {
    display: block;
    font-size: 25px;
    margin-bottom: 7px;
}

/* KATEGORI TERPILIH */

.selected-category {
    background: #f5f5f5;
    padding: 13px 15px;
    border-radius: 10px;
    margin-bottom: 20px;
    font-size: 14px;
}

/* FORM */

.form-group {
    margin-bottom: 17px;
}

label {
    display: block;
    font-size: 14px;
    font-weight: 600;
    margin-bottom: 7px;
}

input,
select,
textarea {
    width: 100%;
    padding: 13px 14px;
    border: 1px solid #ddd;
    border-radius: 10px;
    outline: none;
    font-size: 14px;
    font-family: inherit;
    background: #fff;
}

input:focus,
select:focus,
textarea:focus {
    border-color: #222;
}

textarea {
    min-height: 90px;
    resize: vertical;
}

.row {
    display: grid;
    grid-template-columns: 1fr 1fr;
    gap: 15px;
}

/* SECTION TITLE */

.section-title {
    font-size: 15px;
    font-weight: bold;
    margin: 28px 0 15px;
    padding-bottom: 8px;
    border-bottom: 1px solid #eee;
}

/* INFO */

.info {
    background: #f5f5f5;
    padding: 13px 15px;
    border-radius: 10px;
    font-size: 13px;
    color: #666;
    line-height: 1.6;
    margin-bottom: 18px;
}

/* EMPTY */

.empty-form {
    text-align: center;
    padding: 35px 10px;
    color: #999;
    font-size: 14px;
}

/* ACARA TAMBAHAN */

.acara-box,
.rekening-box {
    border: 1px solid #e5e5e5;
    background: #fafafa;
    border-radius: 12px;
    padding: 18px;
    margin-bottom: 15px;
}

.acara-header {
    display: flex;
    justify-content: space-between;
    align-items: center;
    margin-bottom: 15px;
}

.acara-header strong {
    font-size: 14px;
}

.btn-hapus {
    border: none;
    background: #ffe5e5;
    color: #d00000;
    padding: 7px 10px;
    border-radius: 7px;
    cursor: pointer;
    font-size: 12px;
}

.btn-tambah {
    width: 100%;
    border: 1px dashed #aaa;
    background: #fff;
    padding: 12px;
    border-radius: 10px;
    cursor: pointer;
    font-weight: 600;
    transition: .2s;
}

.btn-tambah:hover {
    background: #f5f5f5;
}

/* MUSIK */

.music-option {
    display: flex;
    gap: 10px;
    align-items: center;
    border: 1px solid #ddd;
    padding: 13px;
    border-radius: 10px;
    margin-bottom: 10px;
    cursor: pointer;
}

.music-option input {
    width: auto;
}

.music-detail {
    display: none;
    margin-top: 10px;
}


/* =====================================================
   PEMBAYARAN
===================================================== */

.payment-box {
    background: #fafafa;
    border: 1px solid #e5e5e5;
    border-radius: 12px;
    padding: 18px;
    margin-bottom: 15px;
}

.payment-detail {
    display: none;
    margin-top: 15px;
}

.payment-info {
    background: #fff;
    border: 1px solid #e5e5e5;
    border-radius: 12px;
    padding: 16px;
    margin-top: 12px;
}

.payment-name {
    font-weight: bold;
    font-size: 16px;
    margin-bottom: 8px;
}

.payment-number {
    font-size: 20px;
    font-weight: bold;
    letter-spacing: .5px;
    margin-bottom: 5px;
    word-break: break-word;
}

.payment-owner {
    color: #777;
    font-size: 13px;
    margin-bottom: 13px;
}

.payment-buttons {
    display: flex;
    gap: 8px;
    flex-wrap: wrap;
}

.btn-copy-payment,
.btn-open-payment {
    border: none;
    padding: 10px 14px;
    border-radius: 9px;
    cursor: pointer;
    font-weight: 600;
    font-size: 13px;
}

.btn-copy-payment {
    background: #222;
    color: #fff;
}

.btn-copy-payment:hover {
    background: #000;
}

.btn-open-payment {
    background: #eee;
    color: #333;
}

.btn-open-payment:hover {
    background: #ddd;
}

.payment-shopee {
    display: block;
    text-align: center;
    background: #ee4d2d;
    color: #fff;
    padding: 12px;
    border-radius: 10px;
    text-decoration: none;
    font-weight: bold;
    margin-top: 12px;
}

.payment-shopee:hover {
    opacity: .9;
}

.upload-preview {
    display: none;
    width: 100%;
    max-height: 250px;
    object-fit: contain;
    margin-top: 10px;
    border-radius: 10px;
    border: 1px solid #ddd;
    background: #fff;
}

.payment-check {
    display: flex;
    align-items: center;
    gap: 8px;
    margin-top: 15px;
    font-weight: 600;
    font-size: 13px;
}

.payment-check input {
    width: 18px;
    height: 18px;
    flex-shrink: 0;
}


/* WHATSAPP */

.btn-wa {
    width: 100%;
    border: none;
    padding: 16px;
    border-radius: 12px;
    background: #25D366;
    color: white;
    font-size: 16px;
    font-weight: bold;
    cursor: pointer;
    transition: .2s;
}

.btn-wa:hover {
    background: #1ebe5d;
    transform: translateY(-1px);
}


/* FOOTER */

.footer {
    text-align: center;
    font-size: 12px;
    color: #999;
    padding-bottom: 20px;
}


/* MOBILE */

@media(max-width:650px) {

    body {
        padding: 20px 10px;
    }

    .card {
        padding: 18px;
    }

    .header h1 {
        font-size: 25px;
    }

    .kategori {
        grid-template-columns: repeat(2, 1fr);
    }

    .row {
        grid-template-columns: 1fr;
        gap: 0;
    }

    .payment-buttons {
        flex-direction: column;
    }

    .btn-copy-payment,
    .btn-open-payment {
        width: 100%;
    }

}

</style>

</head>

<body>


<div class="container">


<!-- HEADER -->

<div class="header">

    <h1>Form Order Undangan Website</h1>

    <p>
        Silakan pilih kategori acara dan lengkapi data pesanan
        dengan benar sebelum dikirim.
    </p>

</div>


<!-- ================================
     KATEGORI
================================ -->

<div class="card">

    <div class="card-title">
        1. Pilih Kategori Acara
    </div>

    <div class="kategori">

        <div
            class="kategori-item"
            onclick="pilihKategori('Pernikahan', this)"
        >
            <span class="kategori-icon">💍</span>
            Pernikahan
        </div>

        <div
            class="kategori-item"
            onclick="pilihKategori('Lamaran', this)"
        >
            <span class="kategori-icon">💐</span>
            Lamaran
        </div>

        <div
            class="kategori-item"
            onclick="pilihKategori('Tunangan', this)"
        >
            <span class="kategori-icon">💎</span>
            Tunangan
        </div>

        <div
            class="kategori-item"
            onclick="pilihKategori('Khitanan', this)"
        >
            <span class="kategori-icon">✨</span>
            Khitanan
        </div>

        <div
            class="kategori-item"
            onclick="pilihKategori('Aqiqah', this)"
        >
            <span class="kategori-icon">👶</span>
            Aqiqah
        </div>

        <div
            class="kategori-item"
            onclick="pilihKategori('Ulang Tahun', this)"
        >
            <span class="kategori-icon">🎂</span>
            Ulang Tahun
        </div>

        <div
            class="kategori-item"
            onclick="pilihKategori('Party & Dinner', this)"
        >
            <span class="kategori-icon">🥂</span>
            Party & Dinner
        </div>

        <div
            class="kategori-item"
            onclick="pilihKategori('Grand Opening', this)"
        >
            <span class="kategori-icon">🎉</span>
            Grand Opening
        </div>

        <div
            class="kategori-item"
            onclick="pilihKategori('Purnabakti', this)"
        >
            <span class="kategori-icon">🏆</span>
            Purnabakti
        </div>

        <div
            class="kategori-item"
            onclick="pilihKategori('Lainnya', this)"
        >
            <span class="kategori-icon">📋</span>
            Lainnya
        </div>

    </div>

</div>


<!-- ================================
     FORM
================================ -->

<div class="card">

    <div class="card-title">
        2. Isi Data Pesanan
    </div>

    <div class="selected-category">

        Kategori :
        <strong id="kategoriTerpilih">
            Belum dipilih
        </strong>

    </div>

    <div id="formDinamis">

        <div class="empty-form">
            Silakan pilih kategori acara terlebih dahulu.
        </div>

    </div>

</div>


<!-- ================================
     WHATSAPP
================================ -->

<div class="card">

    <div class="card-title">
        3. Kirim Pesanan
    </div>

    <div class="info">

        Pastikan semua data yang diisi sudah benar.
        Setelah tombol ditekan, data akan otomatis
        dibuka di WhatsApp admin.

    </div>

    <button
        class="btn-wa"
        onclick="kirimWhatsApp()"
    >
        💬 Kirim Pesanan via WhatsApp
    </button>

</div>


<div class="footer">
    © 2026 MSA Invitation
</div>


</div>



<script>


/* =====================================================
   NOMOR WHATSAPP ADMIN
   GANTI NOMOR DI BAWAH
===================================================== */

const NOMOR_ADMIN = "6281261233730";


let kategoriDipilih = "";

let jumlahAcara = 0;

let jumlahRekening = 0;


/* =====================================================
   FUNGSI INPUT
===================================================== */

function input(label, id, placeholder = "") {

    return `

        <div class="form-group">

            <label>
                ${label}
            </label>

            <input
                type="text"
                id="${id}"
                placeholder="${placeholder}"
            >

        </div>

    `;

}


function textarea(label, id, placeholder = "") {

    return `

        <div class="form-group">

            <label>
                ${label}
            </label>

            <textarea
                id="${id}"
                placeholder="${placeholder}"
            ></textarea>

        </div>

    `;

}


function tanggal(label, id) {

    return `

        <div class="form-group">

            <label>
                ${label}
            </label>

            <input
                type="date"
                id="${id}"
            >

        </div>

    `;

}


/* =====================================================
   PILIH KATEGORI
===================================================== */

function pilihKategori(kategori, element) {

    kategoriDipilih = kategori;

    document
        .querySelectorAll(".kategori-item")
        .forEach(item => {

            item.classList.remove("active");

        });


    element.classList.add("active");


    document
        .getElementById("kategoriTerpilih")
        .textContent = kategori;


    jumlahAcara = 0;

    jumlahRekening = 0;


    buatForm(kategori);

}


/* =====================================================
   BUAT FORM
===================================================== */

function buatForm(kategori) {

    let html = "";


    /* DATA PEMESAN */

    html += `

        <div class="section-title">
            Data Pemesanan
        </div>

        ${input(
            "Nama Pemesan *",
            "namaPemesan",
            "Nama lengkap pemesan"
        )}

        ${input(
            "Nomor WhatsApp *",
            "noWa",
            "Contoh: 08123456789"
        )}

        ${input(
            "Nama / Link Tema Undangan",
            "tema",
            "Contoh: Art Blue Java / link tema"
        )}

    `;


    /* =================================================
       PERNIKAHAN
    ================================================= */

    if (kategori === "Pernikahan") {

        html += `

           <div class="section-title">
    Data Mempelai
</div>

<div class="info">
    Pilih urutan nama mempelai yang ingin ditampilkan
    pada undangan.
</div>


<div class="form-group">

    <label>
        Penulisan Nama Mempelai *
    </label>

    <label
        style="
            display:flex;
            align-items:center;
            gap:10px;
            border:1px solid #ddd;
            padding:13px;
            border-radius:10px;
            margin-bottom:10px;
            cursor:pointer;
            font-weight:normal;
        "
    >

        <input
            type="radio"
            name="urutanMempelai"
            value="Mempelai Pria → Mempelai Wanita"
            style="width:auto;"
        >

        <span>
            Mempelai Pria → Mempelai Wanita
        </span>

    </label>


    <label
        style="
            display:flex;
            align-items:center;
            gap:10px;
            border:1px solid #ddd;
            padding:13px;
            border-radius:10px;
            margin-bottom:10px;
            cursor:pointer;
            font-weight:normal;
        "
    >

        <input
            type="radio"
            name="urutanMempelai"
            value="Mempelai Wanita → Mempelai Pria"
            style="width:auto;"
        >

        <span>
            Mempelai Wanita → Mempelai Pria
        </span>

    </label>

</div>


<div class="row">

    ${input(
        "Nama Lengkap Pengantin Pria",
        "namaPria"
    )}

    ${input(
        "Nama Lengkap Pengantin Wanita",
        "namaWanita"
    )}

</div>


<div class="row">

    ${input(
        "Nama Panggilan Pria",
        "panggilanPria"
    )}

    ${input(
        "Nama Panggilan Wanita",
        "panggilanWanita"
    )}

</div>


<div class="row">

    ${textarea(
        "Nama Orang Tua Pria",
        "ortuPria"
    )}

    ${textarea(
        "Nama Orang Tua Wanita",
        "ortuWanita"
    )}

</div>


<div class="section-title">
    Data Agama & Prosesi
</div>


            <div class="form-group">

                <label>
                    Agama
                </label>

                <select
                    id="agama"
                    onchange="ubahAgama()"
                >

                    <option value="">
                        -- Pilih Agama --
                    </option>

                    <option value="Islam">
                        Islam
                    </option>

                    <option value="Kristen">
                        Kristen
                    </option>

                    <option value="Katolik">
                        Katolik
                    </option>

                    <option value="Hindu">
                        Hindu
                    </option>

                    <option value="Buddha">
                        Buddha
                    </option>

                    <option value="Konghucu">
                        Konghucu
                    </option>

                    <option value="Lainnya">
                        Lainnya
                    </option>

                </select>

            </div>


            <div
                id="boxProsesi"
            ></div>


            <div class="section-title">
                Data Resepsi
            </div>

            <div class="row">

                ${tanggal(
                    "Tanggal Resepsi",
                    "tanggalResepsi"
                )}

                ${input(
                    "Waktu Resepsi",
                    "waktuResepsi",
                    "Contoh: 11.00 - 14.00 WIB"
                )}

            </div>

            ${input(
                "Lokasi Resepsi",
                "lokasiResepsi"
            )}

            ${textarea(
                "Alamat Resepsi",
                "alamatResepsi"
            )}

            ${input(
                "Link Google Maps Resepsi",
                "mapsResepsi",
                "https://maps.google.com/..."
            )}

        `;

    }


    /* =================================================
       LAMARAN
    ================================================= */

    else if (kategori === "Lamaran") {

        html += `

            <div class="section-title">
                Data Pasangan
            </div>

            <div class="row">

                ${input(
                    "Nama Pria",
                    "namaPria"
                )}

                ${input(
                    "Nama Wanita",
                    "namaWanita"
                )}

            </div>

            ${textarea(
                "Nama Orang Tua / Keluarga",
                "keluarga"
            )}

            <div class="section-title">
                Detail Acara
            </div>

            <div class="row">

                ${tanggal(
                    "Tanggal Acara",
                    "tanggalAcara"
                )}

                ${input(
                    "Waktu Acara",
                    "waktuAcara"
                )}

            </div>

            ${input(
                "Nama Tempat",
                "tempat"
            )}

            ${textarea(
                "Alamat Acara",
                "alamat"
            )}

            ${input(
                "Link Google Maps",
                "maps"
            )}

        `;

    }


    /* =================================================
       TUNANGAN
    ================================================= */

    else if (kategori === "Tunangan") {

        html += `

            <div class="section-title">
                Data Pasangan
            </div>

            <div class="row">

                ${input(
                    "Nama Pria",
                    "namaPria"
                )}

                ${input(
                    "Nama Wanita",
                    "namaWanita"
                )}

            </div>

            ${textarea(
                "Nama Orang Tua / Keluarga",
                "keluarga"
            )}

            <div class="section-title">
                Detail Acara
            </div>

            <div class="row">

                ${tanggal(
                    "Tanggal Acara",
                    "tanggalAcara"
                )}

                ${input(
                    "Waktu Acara",
                    "waktuAcara"
                )}

            </div>

            ${input(
                "Nama Tempat",
                "tempat"
            )}

            ${textarea(
                "Alamat Acara",
                "alamat"
            )}

            ${input(
                "Link Google Maps",
                "maps"
            )}

        `;

    }


    /* =================================================
       KHITANAN
    ================================================= */

    else if (kategori === "Khitanan") {

        html += `

            <div class="section-title">
                Data Anak
            </div>

            ${input(
                "Nama Lengkap Anak",
                "namaAnak"
            )}

            ${input(
                "Nama Panggilan Anak",
                "panggilanAnak"
            )}

            ${input(
                "Nama Orang Tua",
                "namaOrtu"
            )}

            <div class="section-title">
                Detail Acara
            </div>

            <div class="row">

                ${tanggal(
                    "Tanggal Acara",
                    "tanggalAcara"
                )}

                ${input(
                    "Waktu Acara",
                    "waktuAcara"
                )}

            </div>

            ${input(
                "Nama Tempat",
                "tempat"
            )}

            ${textarea(
                "Alamat Acara",
                "alamat"
            )}

            ${input(
                "Link Google Maps",
                "maps"
            )}

        `;

    }


    /* =================================================
       AQIQAH
    ================================================= */

    else if (kategori === "Aqiqah") {

        html += `

            <div class="section-title">
                Data Anak
            </div>

            ${input(
                "Nama Lengkap Anak",
                "namaAnak"
            )}

            ${input(
                "Nama Panggilan Anak",
                "panggilanAnak"
            )}

            <div class="form-group">

                <label>
                    Jenis Kelamin
                </label>

                <select id="jenisKelamin">

                    <option value="">
                        -- Pilih --
                    </option>

                    <option value="Putra">
                        Putra
                    </option>

                    <option value="Putri">
                        Putri
                    </option>

                </select>

            </div>

            ${input(
                "Nama Orang Tua",
                "namaOrtu"
            )}

            <div class="section-title">
                Detail Acara
            </div>

            <div class="row">

                ${tanggal(
                    "Tanggal Acara",
                    "tanggalAcara"
                )}

                ${input(
                    "Waktu Acara",
                    "waktuAcara"
                )}

            </div>

            ${input(
                "Nama Tempat",
                "tempat"
            )}

            ${textarea(
                "Alamat Acara",
                "alamat"
            )}

            ${input(
                "Link Google Maps",
                "maps"
            )}

        `;

    }


    /* =================================================
       ULANG TAHUN
    ================================================= */

    else if (kategori === "Ulang Tahun") {

        html += `

            <div class="section-title">
                Data Yang Berulang Tahun
            </div>

            ${input(
                "Nama",
                "nama"
            )}

            ${input(
                "Usia",
                "usia"
            )}

            <div class="section-title">
                Detail Acara
            </div>

            <div class="row">

                ${tanggal(
                    "Tanggal Acara",
                    "tanggalAcara"
                )}

                ${input(
                    "Waktu Acara",
                    "waktuAcara"
                )}

            </div>

            ${input(
                "Nama Tempat",
                "tempat"
            )}

            ${textarea(
                "Alamat Acara",
                "alamat"
            )}

            ${input(
                "Link Google Maps",
                "maps"
            )}

        `;

    }


    /* =================================================
       PARTY & DINNER
    ================================================= */

    else if (kategori === "Party & Dinner") {

        html += `

            <div class="section-title">
                Detail Acara
            </div>

            ${input(
                "Nama Acara",
                "namaAcara"
            )}

            ${input(
                "Host / Penyelenggara",
                "host"
            )}

            <div class="row">

                ${tanggal(
                    "Tanggal Acara",
                    "tanggalAcara"
                )}

                ${input(
                    "Waktu Acara",
                    "waktuAcara"
                )}

            </div>

            ${input(
                "Nama Tempat",
                "tempat"
            )}

            ${textarea(
                "Alamat Acara",
                "alamat"
            )}

            ${input(
                "Link Google Maps",
                "maps"
            )}

        `;

    }


    /* =================================================
       GRAND OPENING
    ================================================= */

    else if (kategori === "Grand Opening") {

        html += `

            <div class="section-title">
                Data Usaha
            </div>

            ${input(
                "Nama Usaha / Bisnis",
                "namaUsaha"
            )}

            ${input(
                "Jenis Usaha",
                "jenisUsaha"
            )}

            ${input(
                "Nama Pemilik",
                "namaPemilik"
            )}

            <div class="section-title">
                Detail Grand Opening
            </div>

            <div class="row">

                ${tanggal(
                    "Tanggal Acara",
                    "tanggalAcara"
                )}

                ${input(
                    "Waktu Acara",
                    "waktuAcara"
                )}

            </div>

            ${input(
                "Nama Lokasi",
                "tempat"
            )}

            ${textarea(
                "Alamat",
                "alamat"
            )}

            ${input(
                "Link Google Maps",
                "maps"
            )}

        `;

    }


    /* =================================================
       PURNABAKTI
    ================================================= */

    else if (kategori === "Purnabakti") {

        html += `

            <div class="section-title">
                Data Purnabakti
            </div>

            ${input(
                "Nama Lengkap",
                "nama"
            )}

            ${input(
                "Jabatan",
                "jabatan"
            )}

            ${input(
                "Instansi / Sekolah",
                "instansi"
            )}

            <div class="section-title">
                Detail Acara
            </div>

            <div class="row">

                ${tanggal(
                    "Tanggal Acara",
                    "tanggalAcara"
                )}

                ${input(
                    "Waktu Acara",
                    "waktuAcara"
                )}

            </div>

            ${input(
                "Nama Tempat",
                "tempat"
            )}

            ${textarea(
                "Alamat",
                "alamat"
            )}

            ${input(
                "Link Google Maps",
                "maps"
            )}

        `;

    }


    /* =================================================
       LAINNYA
    ================================================= */

    else {

        html += `

            <div class="section-title">
                Detail Acara
            </div>

            ${input(
                "Nama Acara",
                "namaAcara"
            )}

            ${input(
                "Nama Penyelenggara",
                "penyelenggara"
            )}

            <div class="row">

                ${tanggal(
                    "Tanggal Acara",
                    "tanggalAcara"
                )}

                ${input(
                    "Waktu Acara",
                    "waktuAcara"
                )}

            </div>

            ${input(
                "Nama Tempat",
                "tempat"
            )}

            ${textarea(
                "Alamat",
                "alamat"
            )}

            ${input(
                "Link Google Maps",
                "maps"
            )}

        `;

    }


    /* =================================================
       BAGIAN UMUM SEMUA KATEGORI
    ================================================= */

    html += `

        <div class="section-title">
            Acara Tambahan
        </div>

        <div class="info">

            Jika ada acara tambahan seperti pengajian,
            siraman, makan bersama, doa bersama,
            gathering, atau acara lainnya,
            silakan tambahkan di sini.

        </div>

        <div id="acaraTambahan"></div>

        <button
            type="button"
            class="btn-tambah"
            onclick="tambahAcara()"
        >
            + Tambah Acara
        </button>


        <div class="section-title">
            Rekening / E-Wallet
        </div>

        <div class="info">

            Maksimal 2 rekening.
            Bisa menggunakan Bank maupun E-Wallet.

        </div>

        <div id="rekeningContainer"></div>

        <button
            type="button"
            class="btn-tambah"
            onclick="tambahRekening()"
        >
            + Tambah Rekening / E-Wallet
        </button>


        <div class="section-title">
            Kirim Kado
        </div>

        ${textarea(
            "Alamat Pengiriman Kado",
            "alamatKado",
            "Tuliskan alamat lengkap untuk pengiriman kado..."
        )}


        <div class="section-title">
            Musik Undangan
        </div>

        <label class="music-option">

            <input
                type="radio"
                name="musik"
                value="Judul Lagu"
                onchange="pilihMusik('judul')"
            >

            <span>
                Menggunakan Judul Lagu
            </span>

        </label>

        <div
            id="musikJudul"
            class="music-detail"
        >

            ${input(
                "Judul Lagu",
                "judulLagu",
                "Contoh: A Thousand Years"
            )}

        </div>


        <label class="music-option">

            <input
                type="radio"
                name="musik"
                value="Link YouTube"
                onchange="pilihMusik('youtube')"
            >

            <span>
                Menggunakan Link YouTube
            </span>

        </label>

        <div
            id="musikYoutube"
            class="music-detail"
        >

            ${input(
                "Link YouTube",
                "linkYoutube",
                "https://youtube.com/..."
            )}

        </div>


        <label class="music-option">

            <input
                type="radio"
                name="musik"
                value="Tidak Menggunakan Musik"
            >

            <span>
                Tidak Menggunakan Musik
            </span>

        </label>

<div class="section-title">
    Pembayaran
</div>

<div class="payment-box">

    <div class="form-group">

        <label>
            Metode Pembayaran *
        </label>

        <select
            id="metodePembayaran"
            onchange="ubahMetodePembayaran()"
        >

            <option value="">
                -- Pilih Metode Pembayaran --
            </option>

            <option value="Bank">
                Transfer Bank
            </option>

            <option value="E-Wallet">
                E-Wallet
            </option>

            <option value="Shopee">
                Pembayaran via Shopee
            </option>

        </select>

    </div>


    <div
        id="pilihanBank"
        class="payment-detail"
    >

        <div class="form-group">

            <label>
                Pilih Bank
            </label>

            <select
                id="bankPembayaran"
                onchange="tampilkanRekeningPembayaran()"
            >

                <option value="">
                    -- Pilih Bank --
                </option>

                <option value="Seabank">
                    Seabank
                </option>

                <option value="BSI">
                    BSI
                </option>

                <option value="BCA">
                    BCA
                </option>

                <option value="BANK ACEH">
                    BANK ACEH
                </option>

                <option value="BRI">
                    BRI
                </option>

            </select>

        </div>

    </div>


    <div
        id="pilihanEwallet"
        class="payment-detail"
    >

        <div class="form-group">

            <label>
                Pilih E-Wallet
            </label>

            <select
                id="ewalletPembayaran"
                onchange="tampilkanRekeningPembayaran()"
            >

                <option value="">
                    -- Pilih E-Wallet --
                </option>

                <option value="DANA">
                    DANA
                </option>

                <option value="OVO">
                    OVO
                </option>

                <option value="GoPay">
                    GoPay
                </option>

                <option value="LinkAja">
                    LinkAja
                </option>

                <option value="ShopeePay">
                    ShopeePay
                </option>

            </select>

        </div>

    </div>


    <div
        id="detailPembayaran"
        class="payment-detail"
    ></div>


    <div
        id="pembayaranShopee"
        class="payment-detail"
    >

        <p>
            Untuk pembayaran melalui Shopee,
            silakan klik tombol berikut:
        </p>

        <a
            href="https://shopee.co.id/product/99830023/29130684751/"
            target="_blank"
            rel="noopener noreferrer"
            class="payment-shopee"
        >
            Bayar via Shopee
        </a>

    </div>


    <div id="dataPembayaran" class="payment-detail">

        ${input(
            "Nominal Pembayaran",
            "nominalPembayaran",
            "Contoh: 100000"
        )}

        ${input(
            "Nama Pengirim",
            "namaPengirimPembayaran",
            "Nama pemilik rekening/e-wallet"
        )}


        <div class="form-group">

            <label>
                Bukti Pembayaran
            </label>

            <input
                type="file"
                id="buktiPembayaran"
                accept="image/*"
                onchange="previewBuktiPembayaran(this)"
            >

            <img
                id="previewBukti"
                class="upload-preview"
                alt="Preview bukti pembayaran"
            >

        </div>


        <label class="payment-check">

            <input
                type="checkbox"
                id="sudahBayar"
            >

            <span>
                Saya sudah melakukan pembayaran
            </span>

        </label>

    </div>

</div>
        <div class="section-title">
            Catatan Tambahan
        </div>

        ${textarea(
            "Catatan / Permintaan Khusus",
            "catatan",
            "Tulis permintaan atau catatan lainnya..."
        )}

    `;


    document
        .getElementById("formDinamis")
        .innerHTML = html;

}


/* =====================================================
   AGAMA → PROSESI
===================================================== */

function ubahAgama() {

    const agama =
        document.getElementById("agama").value;

    const box =
        document.getElementById("boxProsesi");


    if (!agama) {

        box.innerHTML = "";

        return;

    }


    let prosesiDefault = "";


    if (agama === "Islam") {

        prosesiDefault = "Akad Nikah";

    }

    else if (
        agama === "Kristen" ||
        agama === "Katolik"
    ) {

        prosesiDefault = "Pemberkatan";

    }


    box.innerHTML = `

        <div class="form-group">

            <label>
                Jenis Prosesi
            </label>

            <select
                id="jenisProsesi"
                onchange="tampilkanProsesi()"
            >

                <option value="">
                    -- Pilih Prosesi --
                </option>

                <option
                    value="Akad Nikah"
                    ${prosesiDefault === "Akad Nikah" ? "selected" : ""}
                >
                    Akad Nikah
                </option>

                <option
                    value="Pemberkatan"
                    ${prosesiDefault === "Pemberkatan" ? "selected" : ""}
                >
                    Pemberkatan
                </option>

                <option value="Upacara Keagamaan">
                    Upacara Keagamaan
                </option>

                <option value="Prosesi Lainnya">
                    Prosesi Lainnya
                </option>

                <option value="Tidak Ada">
                    Tidak Ada / Lewati
                </option>

            </select>

        </div>

        <div id="detailProsesi"></div>

    `;


    tampilkanProsesi();

}


/* =====================================================
   DETAIL PROSESI
===================================================== */

function tampilkanProsesi() {

    const jenis =
        document.getElementById("jenisProsesi")?.value;

    const box =
        document.getElementById("detailProsesi");


    if (!box) return;


    if (
        !jenis ||
        jenis === "Tidak Ada"
    ) {

        box.innerHTML = "";

        return;

    }


    let labelJenis = jenis;


    if (jenis === "Akad Nikah") {

        labelJenis = "Akad Nikah";

    }

    else if (jenis === "Pemberkatan") {

        labelJenis = "Pemberkatan";

    }


    box.innerHTML = `

        <div class="row">

            ${tanggal(
                "Tanggal " + labelJenis,
                "tanggalProsesi"
            )}

            ${input(
                "Waktu " + labelJenis,
                "waktuProsesi",
                "Contoh: 09.00 WIB"
            )}

        </div>

        ${input(
            "Lokasi " + labelJenis,
            "lokasiProsesi",
            "Nama tempat"
        )}

        ${textarea(
            "Alamat " + labelJenis,
            "alamatProsesi",
            "Alamat lengkap"
        )}

        ${input(
            "Link Google Maps",
            "mapsProsesi",
            "https://maps.google.com/..."
        )}

    `;

}


/* =====================================================
   TAMBAH ACARA
===================================================== */

function tambahAcara() {

    if (jumlahAcara >= 10) {

        alert(
            "Maksimal 10 acara tambahan."
        );

        return;

    }


    jumlahAcara++;


    const container =
        document.getElementById(
            "acaraTambahan"
        );


    const box =
        document.createElement("div");


    box.className =
        "acara-box";


    box.id =
        "acara-" + jumlahAcara;


    box.innerHTML = `

        <div class="acara-header">

            <strong>
                Acara Tambahan ${jumlahAcara}
            </strong>

            <button
                type="button"
                class="btn-hapus"
                onclick="hapusAcara('${box.id}')"
            >
                Hapus
            </button>

        </div>


        ${input(
            "Nama Acara",
            "namaAcaraTambahan" + jumlahAcara,
            "Contoh: Pengajian"
        )}


        <div class="row">

            ${tanggal(
                "Tanggal",
                "tanggalAcaraTambahan" + jumlahAcara
            )}

            ${input(
                "Waktu",
                "waktuAcaraTambahan" + jumlahAcara,
                "Contoh: 19.00 WIB"
            )}

        </div>


        ${input(
            "Lokasi",
            "lokasiAcaraTambahan" + jumlahAcara,
            "Nama tempat"
        )}


        ${textarea(
            "Alamat",
            "alamatAcaraTambahan" + jumlahAcara,
            "Alamat lengkap"
        )}


        ${input(
            "Link Google Maps",
            "mapsAcaraTambahan" + jumlahAcara,
            "https://maps.google.com/..."
        )}

    `;


    container.appendChild(box);

}


/* =====================================================
   HAPUS ACARA
===================================================== */

function hapusAcara(id) {

    const element =
        document.getElementById(id);

    if (element) {

        element.remove();

    }

}


/* =====================================================
   TAMBAH REKENING
===================================================== */

function tambahRekening() {

    if (jumlahRekening >= 2) {

        alert(
            "Maksimal 2 rekening / e-wallet."
        );

        return;

    }


    jumlahRekening++;


    const container =
        document.getElementById(
            "rekeningContainer"
        );


    const box =
        document.createElement("div");


    box.className =
        "rekening-box";


    box.id =
        "rekening-" + jumlahRekening;


    box.innerHTML = `

        <div class="acara-header">

            <strong>
                Rekening ${jumlahRekening}
            </strong>

            <button
                type="button"
                class="btn-hapus"
                onclick="hapusRekening('${box.id}')"
            >
                Hapus
            </button>

        </div>


        <div class="form-group">

            <label>
                Jenis
            </label>

            <select
                id="jenisRekening${jumlahRekening}"
            >

                <option value="">
                    -- Pilih Jenis --
                </option>

                <option value="Bank">
                    Bank
                </option>

                <option value="E-Wallet">
                    E-Wallet
                </option>

            </select>

        </div>


        ${input(
            "Nama Bank / E-Wallet",
            "namaRekening" + jumlahRekening,
            "Contoh: BCA / BRI / DANA / OVO"
        )}


        ${input(
            "Nomor Rekening / E-Wallet",
            "nomorRekening" + jumlahRekening,
            "Masukkan nomor"
        )}


        ${input(
            "Atas Nama",
            "atasNama" + jumlahRekening,
            "Nama pemilik rekening"
        )}

    `;


    container.appendChild(box);

}


/* =====================================================
   HAPUS REKENING
===================================================== */

function hapusRekening(id) {

    const element =
        document.getElementById(id);

    if (element) {

        element.remove();

    }

}

/* =====================================================
   DATA PEMBAYARAN
===================================================== */

const DATA_PEMBAYARAN = {

    "Seabank": {
        jenis: "Bank",
        nomor: "901532794044",
        atasNama: "Arifin Septiyandi Anwar"
    },

    "BSI": {
        jenis: "Bank",
        nomor: "7145424881",
        atasNama: "Arifin Septiyandi Anwar"
    },

    "BCA": {
        jenis: "Bank",
        nomor: "1951871589",
        atasNama: "Arifin Septiyandi Anwar"
    },

    "BANK ACEH": {
        jenis: "Bank",
        nomor: "03702200089571",
        atasNama: "Arifin Septiyandi Anwar"
    },

    "BRI": {
        jenis: "Bank",
        nomor: "723301015616505",
        atasNama: "Arifin Septiyandi Anwar"
    },

    "DANA": {
        jenis: "E-Wallet",
        nomor: "081261233730",
        atasNama: "Arifin Septiyandi Anwar",
        app: "dana://"
    },

    "OVO": {
        jenis: "E-Wallet",
        nomor: "081261233730",
        atasNama: "Arifin Septiyandi Anwar",
        app: "ovo://"
    },

    "GoPay": {
        jenis: "E-Wallet",
        nomor: "081261233730",
        atasNama: "Arifin Septiyandi Anwar"
    },

    "LinkAja": {
        jenis: "E-Wallet",
        nomor: "081261233730",
        atasNama: "Arifin Septiyandi Anwar"
    },

    "ShopeePay": {
        jenis: "E-Wallet",
        nomor: "081261233730",
        atasNama: "Arifin Septiyandi Anwar"
    }

};


/* =====================================================
   UBAH METODE PEMBAYARAN
===================================================== */

function ubahMetodePembayaran() {

    const metode =
        document.getElementById(
            "metodePembayaran"
        )?.value;

    const bank =
        document.getElementById(
            "pilihanBank"
        );

    const ewallet =
        document.getElementById(
            "pilihanEwallet"
        );

    const shopee =
        document.getElementById(
            "pembayaranShopee"
        );

    const data =
        document.getElementById(
            "dataPembayaran"
        );

    const detail =
        document.getElementById(
            "detailPembayaran"
        );


    if (!bank || !ewallet || !shopee) {
        return;
    }


    bank.style.display = "none";
    ewallet.style.display = "none";
    shopee.style.display = "none";


    detail.innerHTML = "";
    detail.style.display = "none";


    if (data) {
        data.style.display = "none";
    }


    if (metode === "Bank") {

        bank.style.display = "block";

    }


    else if (metode === "E-Wallet") {

        ewallet.style.display = "block";

    }


    else if (metode === "Shopee") {

        shopee.style.display = "block";

        if (data) {
            data.style.display = "block";
        }

    }

}


/* =====================================================
   TAMPILKAN REKENING PEMBAYARAN
===================================================== */

function tampilkanRekeningPembayaran() {

    const metode =
        document.getElementById(
            "metodePembayaran"
        )?.value;


    let nama = "";


    if (metode === "Bank") {

        nama =
            document.getElementById(
                "bankPembayaran"
            )?.value;

    }

    else if (metode === "E-Wallet") {

        nama =
            document.getElementById(
                "ewalletPembayaran"
            )?.value;

    }


    const data =
        DATA_PEMBAYARAN[nama];


    const detail =
        document.getElementById(
            "detailPembayaran"
        );

    const dataPembayaran =
        document.getElementById(
            "dataPembayaran"
        );


    if (!detail || !data) {

        if (detail) {
            detail.innerHTML = "";
            detail.style.display = "none";
        }

        if (dataPembayaran) {
            dataPembayaran.style.display = "none";
        }

        return;

    }


    detail.style.display = "block";


    detail.innerHTML = `

        <div class="payment-info">

            <div class="payment-name">
                ${nama}
            </div>

            <div class="payment-number">
                ${data.nomor}
            </div>

            <div class="payment-owner">
                A/N ${data.atasNama}
            </div>

            <div class="payment-buttons">

                <button
                    type="button"
                    class="btn-copy-payment"
                    onclick="salinPembayaran('${data.nomor}')"
                >
                    Salin Nomor
                </button>

                ${
                    data.app
                    ?
                    `
                    <button
                        type="button"
                        class="btn-open-payment"
                        onclick="bukaAplikasiPembayaran('${data.app}')"
                    >
                        Buka Aplikasi
                    </button>
                    `
                    :
                    ""
                }

            </div>

        </div>

    `;


    if (dataPembayaran) {
        dataPembayaran.style.display = "block";
    }

}


/* =====================================================
   SALIN NOMOR
===================================================== */

function salinPembayaran(nomor) {

    navigator.clipboard
        .writeText(nomor)
        .then(() => {

            alert(
                "Nomor pembayaran berhasil disalin."
            );

        })
        .catch(() => {

            alert(
                "Gagal menyalin nomor."
            );

        });

}


/* =====================================================
   BUKA APLIKASI
===================================================== */

function bukaAplikasiPembayaran(link) {

    window.location.href = link;

}


/* =====================================================
   PREVIEW BUKTI PEMBAYARAN
===================================================== */

function previewBuktiPembayaran(inputFile) {

    const preview =
        document.getElementById(
            "previewBukti"
        );


    if (
        !preview ||
        !inputFile.files ||
        !inputFile.files[0]
    ) {

        return;

    }


    const file =
        inputFile.files[0];


    if (!file.type.startsWith("image/")) {

        alert(
            "Bukti pembayaran harus berupa gambar."
        );

        inputFile.value = "";

        preview.style.display = "none";

        return;

    }


    if (file.size > 5 * 1024 * 1024) {

        alert(
            "Ukuran bukti pembayaran maksimal 5 MB."
        );

        inputFile.value = "";

        preview.style.display = "none";

        return;

    }


    const reader =
        new FileReader();


    reader.onload = function(event) {

        preview.src =
            event.target.result;

        preview.style.display =
            "block";

    };


    reader.readAsDataURL(file);

}
/* =====================================================
   MUSIK
===================================================== */

function pilihMusik(type) {

    const judul =
        document.getElementById(
            "musikJudul"
        );

    const youtube =
        document.getElementById(
            "musikYoutube"
        );


    if (judul) {

        judul.style.display = "none";

    }


    if (youtube) {

        youtube.style.display = "none";

    }


    if (type === "judul" && judul) {

        judul.style.display = "block";

    }


    if (type === "youtube" && youtube) {

        youtube.style.display = "block";

    }

}


/* =====================================================
   AMBIL VALUE
===================================================== */

function getValue(id) {

    const el =
        document.getElementById(id);


    if (!el) {

        return "-";

    }


    return el.value.trim() || "-";

}


/* =====================================================
   FORMAT TANGGAL
===================================================== */

function formatTanggal(id) {

    const el =
        document.getElementById(id);


    if (!el || !el.value) {

        return "-";

    }


    const date =
        new Date(
            el.value + "T00:00:00"
        );


    return date.toLocaleDateString(
        "id-ID",
        {
            day: "2-digit",
            month: "long",
            year: "numeric"
        }
    );

}


/* =====================================================
   AMBIL ACARA TAMBAHAN
===================================================== */

function ambilAcaraTambahan() {

    const data = [];


    for (
        let i = 1;
        i <= jumlahAcara;
        i++
    ) {

        const box =
            document.getElementById(
                "acara-" + i
            );


        if (!box) {

            continue;

        }


        data.push({

            nama:
                getValue(
                    "namaAcaraTambahan" + i
                ),

            tanggal:
                formatTanggal(
                    "tanggalAcaraTambahan" + i
                ),

            waktu:
                getValue(
                    "waktuAcaraTambahan" + i
                ),

            lokasi:
                getValue(
                    "lokasiAcaraTambahan" + i
                ),

            alamat:
                getValue(
                    "alamatAcaraTambahan" + i
                ),

            maps:
                getValue(
                    "mapsAcaraTambahan" + i
                )

        });

    }


    return data;

}


/* =====================================================
   AMBIL REKENING
===================================================== */

function ambilRekening() {

    const data = [];


    for (
        let i = 1;
        i <= jumlahRekening;
        i++
    ) {

        const box =
            document.getElementById(
                "rekening-" + i
            );


        if (!box) {

            continue;

        }


        data.push({

            jenis:
                getValue(
                    "jenisRekening" + i
                ),

            nama:
                getValue(
                    "namaRekening" + i
                ),

            nomor:
                getValue(
                    "nomorRekening" + i
                ),

            atasNama:
                getValue(
                    "atasNama" + i
                )

        });

    }


    return data;

}


/* =====================================================
   DATA ACARA UTAMA KE WHATSAPP
===================================================== */

function buatDataUtama() {

    let pesan = "";


    if (kategoriDipilih === "Pernikahan") {

        pesan +=
    "*DATA PENGANTIN*\n\n";


const urutanMempelai =
    document.querySelector(
        'input[name="urutanMempelai"]:checked'
    )?.value || "-";

pesan +=
    "Urutan Nama : " +
    urutanMempelai +
    "\n\n";


pesan +=
    "Nama Pria : " +
    getValue("namaPria") +
    "\n";


        pesan +=
            "Nama Wanita : " +
            getValue("namaWanita") +
            "\n";


        pesan +=
            "Panggilan Pria : " +
            getValue("panggilanPria") +
            "\n";


        pesan +=
            "Panggilan Wanita : " +
            getValue("panggilanWanita") +
            "\n\n";


        pesan +=
            "Orang Tua Pria : " +
            getValue("ortuPria") +
            "\n";


        pesan +=
            "Orang Tua Wanita : " +
            getValue("ortuWanita") +
            "\n\n";


        pesan +=
            "*AGAMA & PROSESI*\n\n";


        pesan +=
            "Agama : " +
            getValue("agama") +
            "\n";


        pesan +=
            "Jenis Prosesi : " +
            getValue("jenisProsesi") +
            "\n";


        if (
            getValue("jenisProsesi") !==
            "Tidak Ada"
        ) {

            pesan +=
                "Tanggal : " +
                formatTanggal(
                    "tanggalProsesi"
                ) +
                "\n";


            pesan +=
                "Waktu : " +
                getValue("waktuProsesi") +
                "\n";


            pesan +=
                "Lokasi : " +
                getValue("lokasiProsesi") +
                "\n";


            pesan +=
                "Alamat : " +
                getValue("alamatProsesi") +
                "\n";


            pesan +=
                "Google Maps : " +
                getValue("mapsProsesi") +
                "\n";

        }


        pesan += "\n";


        pesan +=
            "*RESEPSI*\n\n";


        pesan +=
            "Tanggal : " +
            formatTanggal(
                "tanggalResepsi"
            ) +
            "\n";


        pesan +=
            "Waktu : " +
            getValue(
                "waktuResepsi"
            ) +
            "\n";


        pesan +=
            "Lokasi : " +
            getValue(
                "lokasiResepsi"
            ) +
            "\n";


        pesan +=
            "Alamat : " +
            getValue(
                "alamatResepsi"
            ) +
            "\n";


        pesan +=
            "Google Maps : " +
            getValue(
                "mapsResepsi"
            ) +
            "\n";

    }


    else if (
        kategoriDipilih === "Lamaran" ||
        kategoriDipilih === "Tunangan"
    ) {

        pesan +=
            "*DATA PASANGAN*\n\n";


        pesan +=
            "Nama Pria : " +
            getValue("namaPria") +
            "\n";


        pesan +=
            "Nama Wanita : " +
            getValue("namaWanita") +
            "\n";


        pesan +=
            "Keluarga : " +
            getValue("keluarga") +
            "\n\n";


        pesan +=
            "*DETAIL ACARA*\n\n";


        pesan +=
            "Tanggal : " +
            formatTanggal(
                "tanggalAcara"
            ) +
            "\n";


        pesan +=
            "Waktu : " +
            getValue(
                "waktuAcara"
            ) +
            "\n";


        pesan +=
            "Tempat : " +
            getValue(
                "tempat"
            ) +
            "\n";


        pesan +=
            "Alamat : " +
            getValue(
                "alamat"
            ) +
            "\n";


        pesan +=
            "Google Maps : " +
            getValue(
                "maps"
            ) +
            "\n";

    }


    else if (
        kategoriDipilih === "Khitanan"
    ) {

        pesan +=
            "*DATA ANAK*\n\n";


        pesan +=
            "Nama Anak : " +
            getValue(
                "namaAnak"
            ) +
            "\n";


        pesan +=
            "Nama Panggilan : " +
            getValue(
                "panggilanAnak"
            ) +
            "\n";


        pesan +=
            "Nama Orang Tua : " +
            getValue(
                "namaOrtu"
            ) +
            "\n\n";


        pesan +=
            "*DETAIL ACARA*\n\n";


        pesan +=
            "Tanggal : " +
            formatTanggal(
                "tanggalAcara"
            ) +
            "\n";


        pesan +=
            "Waktu : " +
            getValue(
                "waktuAcara"
            ) +
            "\n";


        pesan +=
            "Tempat : " +
            getValue(
                "tempat"
            ) +
            "\n";


        pesan +=
            "Alamat : " +
            getValue(
                "alamat"
            ) +
            "\n";


        pesan +=
            "Google Maps : " +
            getValue(
                "maps"
            ) +
            "\n";

    }


    else if (
        kategoriDipilih === "Aqiqah"
    ) {

        pesan +=
            "*DATA ANAK*\n\n";


        pesan +=
            "Nama Anak : " +
            getValue(
                "namaAnak"
            ) +
            "\n";


        pesan +=
            "Nama Panggilan : " +
            getValue(
                "panggilanAnak"
            ) +
            "\n";


        pesan +=
            "Jenis Kelamin : " +
            getValue(
                "jenisKelamin"
            ) +
            "\n";


        pesan +=
            "Nama Orang Tua : " +
            getValue(
                "namaOrtu"
            ) +
            "\n\n";


        pesan +=
            "*DETAIL ACARA*\n\n";


        pesan +=
            "Tanggal : " +
            formatTanggal(
                "tanggalAcara"
            ) +
            "\n";


        pesan +=
            "Waktu : " +
            getValue(
                "waktuAcara"
            ) +
            "\n";


        pesan +=
            "Tempat : " +
            getValue(
                "tempat"
            ) +
            "\n";


        pesan +=
            "Alamat : " +
            getValue(
                "alamat"
            ) +
            "\n";


        pesan +=
            "Google Maps : " +
            getValue(
                "maps"
            ) +
            "\n";

    }


    else if (
        kategoriDipilih === "Ulang Tahun"
    ) {

        pesan +=
            "*DATA ULANG TAHUN*\n\n";


        pesan +=
            "Nama : " +
            getValue(
                "nama"
            ) +
            "\n";


        pesan +=
            "Usia : " +
            getValue(
                "usia"
            ) +
            "\n\n";


        pesan +=
            "*DETAIL ACARA*\n\n";


        pesan +=
            "Tanggal : " +
            formatTanggal(
                "tanggalAcara"
            ) +
            "\n";


        pesan +=
            "Waktu : " +
            getValue(
                "waktuAcara"
            ) +
            "\n";


        pesan +=
            "Tempat : " +
            getValue(
                "tempat"
            ) +
            "\n";


        pesan +=
            "Alamat : " +
            getValue(
                "alamat"
            ) +
            "\n";


        pesan +=
            "Google Maps : " +
            getValue(
                "maps"
            ) +
            "\n";

    }


    else if (
        kategoriDipilih === "Party & Dinner"
    ) {

        pesan +=
            "*DETAIL PARTY & DINNER*\n\n";


        pesan +=
            "Nama Acara : " +
            getValue(
                "namaAcara"
            ) +
            "\n";


        pesan +=
            "Host : " +
            getValue(
                "host"
            ) +
            "\n";


        pesan +=
            "Tanggal : " +
            formatTanggal(
                "tanggalAcara"
            ) +
            "\n";


        pesan +=
            "Waktu : " +
            getValue(
                "waktuAcara"
            ) +
            "\n";


        pesan +=
            "Tempat : " +
            getValue(
                "tempat"
            ) +
            "\n";


        pesan +=
            "Alamat : " +
            getValue(
                "alamat"
            ) +
            "\n";


        pesan +=
            "Google Maps : " +
            getValue(
                "maps"
            ) +
            "\n";

    }


    else if (
        kategoriDipilih === "Grand Opening"
    ) {

        pesan +=
            "*DATA GRAND OPENING*\n\n";


        pesan +=
            "Nama Usaha : " +
            getValue(
                "namaUsaha"
            ) +
            "\n";


        pesan +=
            "Jenis Usaha : " +
            getValue(
                "jenisUsaha"
            ) +
            "\n";


        pesan +=
            "Nama Pemilik : " +
            getValue(
                "namaPemilik"
            ) +
            "\n\n";


        pesan +=
            "*DETAIL ACARA*\n\n";


        pesan +=
            "Tanggal : " +
            formatTanggal(
                "tanggalAcara"
            ) +
            "\n";


        pesan +=
            "Waktu : " +
            getValue(
                "waktuAcara"
            ) +
            "\n";


        pesan +=
            "Lokasi : " +
            getValue(
                "tempat"
            ) +
            "\n";


        pesan +=
            "Alamat : " +
            getValue(
                "alamat"
            ) +
            "\n";


        pesan +=
            "Google Maps : " +
            getValue(
                "maps"
            ) +
            "\n";

    }


    else if (
        kategoriDipilih === "Purnabakti"
    ) {

        pesan +=
            "*DATA PURNABAKTI*\n\n";


        pesan +=
            "Nama : " +
            getValue(
                "nama"
            ) +
            "\n";


        pesan +=
            "Jabatan : " +
            getValue(
                "jabatan"
            ) +
            "\n";


        pesan +=
            "Instansi : " +
            getValue(
                "instansi"
            ) +
            "\n\n";


        pesan +=
            "*DETAIL ACARA*\n\n";


        pesan +=
            "Tanggal : " +
            formatTanggal(
                "tanggalAcara"
            ) +
            "\n";


        pesan +=
            "Waktu : " +
            getValue(
                "waktuAcara"
            ) +
            "\n";


        pesan +=
            "Tempat : " +
            getValue(
                "tempat"
            ) +
            "\n";


        pesan +=
            "Alamat : " +
            getValue(
                "alamat"
            ) +
            "\n";


        pesan +=
            "Google Maps : " +
            getValue(
                "maps"
            ) +
            "\n";

    }


    else {

        pesan +=
            "*DETAIL ACARA*\n\n";


        pesan +=
            "Nama Acara : " +
            getValue(
                "namaAcara"
            ) +
            "\n";


        pesan +=
            "Penyelenggara : " +
            getValue(
                "penyelenggara"
            ) +
            "\n";


        pesan +=
            "Tanggal : " +
            formatTanggal(
                "tanggalAcara"
            ) +
            "\n";


        pesan +=
            "Waktu : " +
            getValue(
                "waktuAcara"
            ) +
            "\n";


        pesan +=
            "Tempat : " +
            getValue(
                "tempat"
            ) +
            "\n";


        pesan +=
            "Alamat : " +
            getValue(
                "alamat"
            ) +
            "\n";


        pesan +=
            "Google Maps : " +
            getValue(
                "maps"
            ) +
            "\n";

    }


    return pesan;

}


/* =====================================================
   KIRIM WHATSAPP
===================================================== */

function kirimWhatsApp() {

    if (!kategoriDipilih) {

        alert(
            "Silakan pilih kategori acara terlebih dahulu."
        );

        return;

    }


    if (
        getValue("namaPemesan") === "-"
    ) {

        alert(
            "Silakan isi Nama Pemesan."
        );

        return;

    }


    if (
        getValue("noWa") === "-"
    ) {

        alert(
            "Silakan isi Nomor WhatsApp."
        );

        return;

    }


    let pesan = "";


    pesan +=
        "*FORM ORDER UNDANGAN WEBSITE*";

    pesan +=
        "\n━━━━━━━━━━━━━━━━━━━━\n\n";


    pesan +=
        "*KATEGORI ACARA*\n";

    pesan +=
        kategoriDipilih;

    pesan += "\n\n";


    pesan +=
        "*DATA PEMESAN*\n\n";


    pesan +=
        "Nama Pemesan : " +
        getValue(
            "namaPemesan"
        ) +
        "\n";


    pesan +=
        "No. WhatsApp : " +
        getValue(
            "noWa"
        ) +
        "\n";


    pesan +=
        "Tema : " +
        getValue(
            "tema"
        ) +
        "\n\n";


    pesan +=
        buatDataUtama();


    /* =========================================
       ACARA TAMBAHAN
    ========================================= */

    const acaraTambahan =
        ambilAcaraTambahan();


    if (
        acaraTambahan.length > 0
    ) {

        pesan +=
            "\n\n*ACARA TAMBAHAN*\n";


        acaraTambahan.forEach(
            (acara, index) => {

                pesan +=
                    "\n" +
                    (index + 1) +
                    ". " +
                    acara.nama +
                    "\n";

                pesan +=
                    "Tanggal : " +
                    acara.tanggal +
                    "\n";

                pesan +=
                    "Waktu : " +
                    acara.waktu +
                    "\n";

                pesan +=
                    "Lokasi : " +
                    acara.lokasi +
                    "\n";

                pesan +=
                    "Alamat : " +
                    acara.alamat +
                    "\n";

                pesan +=
                    "Google Maps : " +
                    acara.maps +
                    "\n";

            }
        );

    }


    /* =========================================
       REKENING
    ========================================= */

    const rekening =
        ambilRekening();


    if (
        rekening.length > 0
    ) {

        pesan +=
            "\n*REKENING / E-WALLET*\n";


        rekening.forEach(
            (rek, index) => {

                pesan +=
                    "\n" +
                    (index + 1) +
                    ". " +
                    rek.jenis +
                    "\n";

                pesan +=
                    "Nama : " +
                    rek.nama +
                    "\n";

                pesan +=
                    "Nomor : " +
                    rek.nomor +
                    "\n";

                pesan +=
                    "Atas Nama : " +
                    rek.atasNama +
                    "\n";

            }
        );

    }

/* =========================================
   PEMBAYARAN
========================================= */

const metodePembayaran =
    getValue("metodePembayaran");

if (
    metodePembayaran !== "-"
) {

    pesan +=
        "\n*PEMBAYARAN*\n";


    pesan +=
        "Metode : " +
        metodePembayaran +
        "\n";


    let pembayaranNama = "-";


    if (
        metodePembayaran === "Bank"
    ) {

        pembayaranNama =
            getValue(
                "bankPembayaran"
            );

    }

    else if (
        metodePembayaran === "E-Wallet"
    ) {

        pembayaranNama =
            getValue(
                "ewalletPembayaran"
            );

    }

    else if (
        metodePembayaran === "Shopee"
    ) {

        pembayaranNama =
            "Shopee";

    }


    pesan +=
        "Pembayaran : " +
        pembayaranNama +
        "\n";


    const nominal =
        getValue(
            "nominalPembayaran"
        );


    if (
        nominal !== "-"
    ) {

        pesan +=
            "Nominal : Rp " +
            nominal +
            "\n";

    }


    const namaPengirim =
        getValue(
            "namaPengirimPembayaran"
        );


    if (
        namaPengirim !== "-"
    ) {

        pesan +=
            "Nama Pengirim : " +
            namaPengirim +
            "\n";

    }


    const sudahBayar =
        document.getElementById(
            "sudahBayar"
        );


    pesan +=
        "Status : " +
        (
            sudahBayar?.checked
            ?
            "Sudah melakukan pembayaran"
            :
            "Belum melakukan pembayaran"
        ) +
        "\n";


    const bukti =
        document.getElementById(
            "buktiPembayaran"
        );


    pesan +=
        "\n*BUKTI PEMBAYARAN*\n";


    if (
        bukti?.files?.length
    ) {

        pesan +=
            "Bukti sudah dipilih.\n";

        pesan +=
            "Silakan kirim foto bukti pembayaran di chat WhatsApp ini.\n";

    }

    else {

        pesan +=
            "Belum ada bukti pembayaran.\n";

    }

}
    /* =========================================
       KADO
    ========================================= */

    pesan +=
        "\n*KIRIM KADO*\n";

    pesan +=
        getValue(
            "alamatKado"
        ) +
        "\n";


    /* =========================================
       MUSIK
    ========================================= */

    pesan +=
        "\n*MUSIK UNDANGAN*\n";


    const musik =
        document.querySelector(
            'input[name="musik"]:checked'
        );


    if (!musik) {

        pesan +=
            "Belum dipilih\n";

    }

    else if (
        musik.value ===
        "Judul Lagu"
    ) {

        pesan +=
            "Jenis : Judul Lagu\n";

        pesan +=
            "Judul : " +
            getValue(
                "judulLagu"
            ) +
            "\n";

    }

    else if (
        musik.value ===
        "Link YouTube"
    ) {

        pesan +=
            "Jenis : Link YouTube\n";

        pesan +=
            "Link : " +
            getValue(
                "linkYoutube"
            ) +
            "\n";

    }

    else {

        pesan +=
            "Tidak menggunakan musik\n";

    }


    /* =========================================
       CATATAN
    ========================================= */

    pesan +=
        "\n*CATATAN TAMBAHAN*\n";

    pesan +=
        getValue(
            "catatan"
        );


    pesan +=
        "\n\n━━━━━━━━━━━━━━━━━━━━";


    /* =========================================
       OPEN WHATSAPP
    ========================================= */

    const url =
        "https://wa.me/" +
        NOMOR_ADMIN +
        "?text=" +
        encodeURIComponent(
            pesan
        );


    window.open(
        url,
        "_blank"
    );

}

</script>

</body>
</html>
```
