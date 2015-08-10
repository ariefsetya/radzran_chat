-- phpMyAdmin SQL Dump
-- version 4.0.10.6
-- http://www.phpmyadmin.net
--
-- Inang: localhost
-- Waktu pembuatan: 07 Des 2014 pada 11.51
-- Versi Server: 5.5.40-cll
-- Versi PHP: 5.4.23

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

-- --------------------------------------------------------

--
-- Struktur dari tabel `radzran`
--

CREATE TABLE IF NOT EXISTS `radzran` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `nama` text NOT NULL,
  `tanggal` date NOT NULL,
  `jam` time NOT NULL,
  `isi` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=39 ;

--
-- Struktur dari tabel `radzran_pengguna`
--

CREATE TABLE IF NOT EXISTS `radzran_pengguna` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `namapengguna` text NOT NULL,
  `password` text NOT NULL,
  `tanggal` date NOT NULL,
  `jam` time NOT NULL,
  `last_login` text NOT NULL,
  `namalengkap` text NOT NULL,
  `tanggallahir` date NOT NULL,
  `tempatlahir` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=11 ;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
