/*
 * usbimager/lang.c
 *
 * Copyright (C) 2020 bzt (bztsrc@gitlab)
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * @brief Multilanguage support. This file MUST BE encoded in UTF-8!
 *
 */

#include "lang.h"

/**
 * Translations
 */
char *dict[NUMLANGS][NUMTEXTS + 1] = {
    {
        "en",
        "Verify",
        "Compress",
        "Write",
        "Read",
        "Send",
        "Serial port",
        "MiB",
        "GiB",

        "Error",
        "Waiting for client",
        "Communication error",
        "Write verification failed.",
        "An error occurred while writing to the target device.",
        "An error occurred while writing to the image file.",
        "An error occurred while reading the source.",
        "Please select a valid device.",
        "Unable to dismount volume or lock the device",
        "Unable to umount volumes on device",
        "Unable to open volume",
        "An error occurred while opening the device.",
        "Unable to create image file.",
        "Encrypted ZIP not supported",
        "Unsupported compression method in ZIP",
        "Decompressor error",
        "Please select a readable source file.",
        "Done. Image written successfully in %02d:%02d:%02d.",
        "%d hours and %d minutes left",
        "%d hours and %d minute left",
        "%d hour and %d minutes left",
        "%d hour and %d minute left",
        "%d minutes left",
        "%d minute left",
        "less than a minute left",
        "so far",

        "OK",
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Yesterday",
        "Just now",
        "%d minutes ago",
        "%d hours ago",
        "an hour ago",
        "Open",
        "Cancel",
        "Recently Used",
        "Home",
        "Desktop",
        "Downloads",
        "Filesystem",
        "Name",
        "Size",
        "Modified",
        "Show all files"
    },
    {
        "es",
        "Verificar",
        "Comprimir",
        "Escribir",
        "Leer",
        "Enviar",
        "Linea serie",
        "MiB",
        "GiB",

        "Error",
        "Esperando cliente",
        "Error de comunicación",
        "La verificación de escritura falló.",
        "Se produjo un error al escribir en el dispositivo de destino.",
        "Se produjo un error al escribir en el archivo de imagen.",
        "Se produjo un error al leer la fuente.",
        "Por favor seleccione un dispositivo válido.",
        "No se puede desmontar el volumen o bloquear el dispositivo",
        "No se pueden desmontar volúmenes en el dispositivo",
        "No se puede abrir el volumen",
        "Se produjo un error al abrir el dispositivo.",
        "No se puede crear el archivo de imagen.",
        "Cifrado ZIP no compatible",
        "Método de compresión no compatible en ZIP",
        "Error descompresor",
        "Seleccione un archivo fuente legible.",
        "Hecho. Imagen escrita con éxito en %02d:%02d:%02d.",
        "Quedan %d horas y %d minutos",
        "Quedan %d horas y %d minuto",
        "Quedan %d hora y %d minutos",
        "Quedan %d hora y %d minuto",
        "Quedan %d minutos",
        "Quedan %d minuto",
        "Queda menos de un minuto",
        "descomprimido",

        "Correcto",
        "Domingo",
        "Lunes",
        "Martes",
        "Miércoles",
        "Jueves",
        "Viernes",
        "Sábado",
        "Ayer",
        "Justo ahora",
        "hace %d minutos",
        "hace %d horas",
        "hace una hora",
        "Abierto",
        "Cancelar",
        "Recientemente usado",
        "Home",
        "Escritorio",
        "Descargas",
        "Sistema de archivos",
        "Nombre",
        "Tamaño",
        "Modificado",
        "Mostrar todos los archivos"
    },
    {
        "de",
        "Überprüfen",
        "Komprimieren",
        "Schreiben",
        "Lesen",
        "Senden",
        "Serielle Schnittstelle",
        "MiB",
        "GiB",

        "Fehler",
        "Warten auf Kunden",
        "Kommunikationsfehler",
        "Schreibüberprüfung fehlgeschlagen.",
        "Beim Schreiben auf das Zielgerät ist ein Fehler aufgetreten.",
        "Beim Schreiben in die Bilddatei ist ein Fehler aufgetreten.",
        "Beim Lesen der Quelle ist ein Fehler aufgetreten.",
        "Bitte wählen Sie ein gültiges Gerät aus.",
        "Datenträger kann nicht ausgehängt oder das Gerät gesperrt werden",
        "Datenträger auf dem Gerät können nicht ausgehängt werden",
        "Datenträger kann nicht geöffnet werden",
        "Beim Öffnen des Geräts ist ein Fehler aufgetreten.",
        "Bilddatei kann nicht erstellt werden.",
        "Verschlüsselte ZIP wird nicht unterstützt",
        "Nicht unterstützte Komprimierungsmethode in ZIP",
        "Dekomprimierungsfehler",
        "Bitte wählen Sie eine lesbare Quelldatei.",
        "Erledigt. Bild erfolgreich in %02d:%02d:%02d geschrieben.",
        "%d Stunden und %d Minuten übrig",
        "%d Stunden und %d Minute übrig",
        "%d Stunde und %d Minuten übrig",
        "%d Stunde und %d Minute übrig",
        "%d Minuten übrig",
        "%d Minute übrig",
        "weniger als eine Minute übrig",
        "bisher",

        "OK",
        "Sonntag",
        "Montag",
        "Dienstag",
        "Mittwoch",
        "Donnerstag",
        "Freitag",
        "Samstag",
        "Gestern",
        "Gerade jetzt",
        "%d Minuten her",
        "%d Stunden her",
        "vor einer Stunde",
        "Öffnen",
        "Stornieren",
        "Kürzlich verwendet",
        "Zuhause",
        "Desktop",
        "Heruntergeladen",
        "Dateisystem",
        "Name",
        "Größe",
        "Geändert",
        "Alle Dateien anzeigen"
    },
    {
        "fr",
        "Vérifier",
        "Compresse",
        "Écrire",
        "Lis",
        "Envoyer",
        "Port série",
        "Mio",
        "Gio",

        "Erreur",
        "En attente du client",
        "Erreur de communication",
        "Échec de la vérification de l'écriture.",
        "Une erreur s'est produite lors de l'écriture sur le périphérique cible.",
        "Une erreur s'est produite lors de l'écriture dans le fichier image.",
        "Une erreur s'est produite lors de la lecture de la source.",
        "Veuillez sélectionner un périphérique valide.",
        "Impossible de démonter le volume ou de verrouiller le périphérique",
        "Impossible de démonter les volumes sur le périphérique",
        "Impossible d'ouvrir le volume",
        "Une erreur s'est produite lors de l'ouverture du périphérique.",
        "Impossible de créer un fichier image.",
        "ZIP crypté non pris en charge",
        "Méthode de compression non prise en charge dans ZIP",
        "Erreur du décompresseur",
        "Veuillez sélectionner un fichier source lisible.",
        "Terminé. Image écrite avec succès en %02d:%02d:%02d.",
        "%d heures et %d minutes restantes",
        "%d heures et %d minute restantes",
        "%d heure et %d minutes restantes",
        "%d heure et %d minute",
        "%d minutes restantes",
        "%d minute restante",
        "moins d'une minute",
        "decompressé",

        "OK",
        "Dimanche",
        "Lundi",
        "Mardi",
        "Mercredi",
        "Jeudi",
        "Vendredi",
        "Samedi",
        "Hier",
        "Juste maintenant",
        "Il y a %d minutes",
        "Il y a %d heures",
        "Il y a une heure",
        "Ouvert",
        "Annuler",
        "Utilisé récemment",
        "Accueil",
        "Bureau",
        "Téléchargements",
        "Système de fichiers",
        "Nom",
        "Taille",
        "Modifié",
        "Afficher tous les fichiers"
    },
    {
        "hu",
        "Ellenőrzés",
        "Tömörítés",
        "Kiír",
        "Beolvas",
        "Küld",
        "Soros port",
        "MiB",
        "GiB",

        "Hiba",
        "Várakozás a kliensre",
        "Kommunikációs hiba",
        "Írás ellenőrzési hiba.",
        "Hiba a céleszköz írása közben.",
        "Hiba a lemezkép írása közben.",
        "Hiba a forrás olvasása közben.",
        "Kérlek válassz érvényes eszközt.",
        "Nem sikerült lecsatolni és zárolni az eszközt",
        "Nem sikerült lecsatolni az eszközt",
        "Nem sikerült megnyitni a kötetet",
        "Nem sikerült megnyitni az eszközt",
        "Nem tudom létrehozni a képfájlt",
        "Titkosított ZIP",
        "Ismeretlen tömörítési metódus a ZIPben",
        "Kitömörítő könyvtár hiba",
        "Kérlek válassz egy olvasható forrásfájlt.",
        "Kész. A lemezképet sikeresen kiírtam %02d:%02d:%02d alatt.",
        "%d óra és %d perc van vissza",
        "%d óra és %d perc van vissza",
        "%d óra és %d perc van vissza",
        "%d óra és %d perc van vissza",
        "még %d perc",
        "még %d perc",
        "már csak egy perc",
        "ezidáig",

        "OK",
        "Vasárnap",
        "Hétfő",
        "Kedd",
        "Szerda",
        "Csütörtök",
        "Péntek",
        "Szombat",
        "tegnap",
        "épp most",
        "%d perce",
        "%d órája",
        "egy órája",
        "Megnyitás",
        "Mégsem",
        "Legutóbb használtak",
        "Saját mappa",
        "Asztal",
        "Letöltések",
        "Fájlrendszer",
        "Név",
        "Méret",
        "Módosítva",
        "Minden fájl mutatása"
    },
    {
        "it",
        "Verificare",
        "Comprimere",
        "Scrivi",
        "Leggere",
        "Spedire",
        "Porta seriale",
        "MiB",
        "GiB",

        "Errore",
        "In attesa di client",
        "Errore di comunicazione",
        "Verifica della scrittura non riuscita.",
        "Si è verificato un errore durante la scrittura sul dispositivo di destinazione.",
        "Si è verificato un errore durante la scrittura nel file di immagine.",
        "Si è verificato un errore durante la lettura della fonte.",
        "Seleziona un dispositivo valido.",
        "Impossibile smontare il volume o bloccare il dispositivo",
        "Impossibile smontare i volumi sul dispositivo",
        "Impossibile aprire il volume",
        "Si è verificato un errore durante l'apertura del dispositivo.",
        "Impossibile creare il file immagine.",
        "ZIP crittografato non supportato",
        "Metodo di compressione non supportato in ZIP",
        "Errore del decompressore",
        "Seleziona un file sorgente leggibile.",
        "Fatto. Immagine scritta con successo in %02d:%02d:%02d.",
        "%d ore e %d minuti rimanenti",
        "%d ore e %d minuto rimanenti",
        "%d ora e %d minuti rimanenti",
        "%d ora e %d minuto rimanenti",
        "%d minuti rimanenti",
        "%d minuto rimanente",
        "meno di un minuto rimasto",
        "finora",

        "OK",
        "Domenica",
        "Lunedi",
        "Martedì",
        "Mercoledì",
        "Giovedi",
        "Venerdì",
        "Sabato",
        "Ieri",
        "Proprio adesso",
        "%d minuti fa",
        "%d ore fa",
        "Un'ora fa",
        "Aperto",
        "Annulla",
        "Usato di recente",
        "Casa",
        "Desktop",
        "Scaricata",
        "Filesistema",
        "Nome",
        "Taglia",
        "Modificata",
        "Mostra tutti i file"
    },
    {
        "nl",
        "Verifiëren",
        "Inpakken",
        "Schrijven",
        "Lezen",
        "Sturen",
        "Seriële poort",
        "MiB",
        "GiB",

        "Fout",
        "Wachten op verbinding",
        "Communicatie fout",
        "Verificatie van het schrijven mislukt.",
        "Er is een fout opgetreden tijdens het schrijven naar het doelapparaat.",
        "Er is een fout opgetreden tijdens het schrijven naar het image.",
        "Er is een fout opgetreden tijdens het lezen van de bron.",
        "Selecteer een geldig apparaat.",
        "Kan volume niet afkoppelen of apparaat vergrendelen",
        "Kan volumes op apparaat niet ontkoppelen",
        "Kan volume niet openen",
        "Er is een fout opgetreden bij het openen van het apparaat.",
        "Kan image niet maken.",
        "Gecodeerde ZIP wordt niet ondersteund",
        "Niet-ondersteunde inpakmethode in ZIP",
        "Fout bij uitpakken",
        "Selecteer een leesbaar bronbestand.",
        "Klaar. Image succesvol geschreven in %02d:%02d:%02d.",
        "%d uur en %d minuten resterend",
        "%d uur en %d minuut resterend",
        "%d uur en %d minuten resterend",
        "%d uur en %d minuut resterend",
        "%d minuten resterend",
        "%d minuut resterend",
        "minder dan een minuut over",
        "tot nu toe",

        "OK",
        "zondag",
        "maandag",
        "dinsdag",
        "woensdag",
        "donderdag",
        "vrijdag",
        "zaterdag",
        "gisteren",
        "zojuist",
        "%d minuten geleden",
        "%d uur geleden",
        "een uur geleden",
        "Open",
        "Annuleren",
        "Onlangs gebruikt",
        "Home",
        "Bureaublad",
        "Gedownloade",
        "Bestandssysteem",
        "Naam",
        "Afmeting",
        "Gewijzigde",
        "Toon alle bestanden",
    },
    {
        "pl",
        "Zweryfikuj",
        "Kompresuj",
        "Zapisz",
        "Wczytaj",
        "Wyślij",
        "Port szeregowy",
        "MiB",
        "GiB",

        "Błąd",
        "Czekam na klienta",
        "Błąd komunikacji",
        "Weryfikacja zapisu nie powiodła się.",
        "Wystąpił błąd podczas zapisywania na urządzeniu docelowym.",
        "Wystąpił błąd podczas zapisywania do pliku obrazu.",
        "Wystąpił błąd podczas odczytu źródła.",
        "Wybierz prawidłowe urządzenie.",
        "Nie można odinstalować woluminu ani zablokować urządzenia",
        "Nie można odmontować woluminów na urządzeniu",
        "Nie można otworzyć woluminu",
        "Wystąpił błąd podczas otwierania urządzenia.",
        "Nie można utworzyć pliku obrazu.",
        "Szyfrowane pliki ZIP nie są obsługiwane",
        "Nieobsługiwana metoda kompresji w ZIP",
        "Błąd dekompresora",
        "Wybierz czytelny plik źródłowy.",
        "Gotowy. Obraz zapisany pomyślnie w %02d:%02d:%02d.",
        "pozostało %d godzin i %d minut",
        "pozostało %d godzin i %d minuta",
        "pozostała %d godzina i %d minut",
        "pozostała %d godzina i %d minuta",
        "pozostało %d minut",
        "pozostała %d minuta",
        "pozostała niecała minuta",
        "jak dotąd",

        "Dobrze",
        "Niedziela",
        "Poniedziałek",
        "Wtorek",
        "Środa",
        "Czwartek",
        "Piątek",
        "Sobota",
        "Wczoraj",
        "Właśnie",
        "%d minut temu",
        "%d godzin temu",
        "godzinę temu",
        "Otwórz",
        "Anuluj",
        "Ostatnio używane",
        "Domowy",
        "Pulpit",
        "Pobrane",
        "System plików",
        "Nazwa",
        "Rozmiar",
        "Zmodyfikowano",
        "Pokaż wszystkie pliki"
    },
    {
        "pt",
        "Verificar",
        "Comprimir",
        "Gravar",
        "Ler",
        "Enviar",
        "Porta série",
        "MiB",
        "GiB",

        "Erro",
        "A aguardar cliente",
        "Erro de comunicação",
        "A verificação de gravação falhou.",
        "Ocorreu um erro ao gravar no dispositivo de destino.",
        "Ocorreu um erro ao gravar no arquivo de imagem.",
        "Ocorreu um erro ao ler a fonte.",
        "Por favor, selecione um dispositivo válido.",
        "Não foi possível desmontar o volume ou bloquear o dispositivo",
        "Não foi possível desmontar volumes no dispositivo",
        "Não foi possível abrir o volume",
        "Ocorreu um erro ao abrir o dispositivo.",
        "Não foi possível criar o arquivo de imagem.",
        "ZIP encriptado não suportado",
        "Método de compactação não suportado no ZIP",
        "Erro de descompressor",
        "Por favor, selecione um arquivo fonte legível.",
        "Feito. Imagem gravada com sucesso em %02d:%02d:%02d.",
        "%d horas e %d minutos restantes",
        "%d horas e %d minuto restantes",
        "%d hora e %d minutos restantes",
        "%d hora e %d minuto restante",
        "%d minutos restantes",
        "%d minuto restante",
        "menos de um minuto restante",
        "até agora",

        "Tudo bem",
        "Domingo",
        "Segunda-feira",
        "Terça-feira",
        "Quarta-feira",
        "Quinta-feira",
        "Sexta-feira",
        "Sábado",
        "Ontem",
        "Agora mesmo",
        "Há %d minutos",
        "Há %d horas",
        "Uma hora atrás",
        "Aberto",
        "Cancelar",
        "Usado recentemente",
        "Casa",
        "Trabalho",
        "Transferido",
        "Sistema de arquivo",
        "Nome",
        "Tamanho",
        "Modificado",
        "Mostrar todos os arquivos"
    },
    {
        "gd",
        "Dearbhaich",
        "Compress",
        "Sgrìobh",
        "Leugh",
        "Cuir",
        "Port sreathach",
        "MiB",
        "GiB",

        "Mearachd",
        "A ’feitheamh ri neach-dèiligidh",
        "Mearachd conaltraidh",
        "Sgrìobh dearbhadh air fàiligeadh.",
        "Thachair mearachd fhad ‘s a bha e a’ sgrìobhadh chun inneal targaid.",
        "Thachair mearachd nuair a bha e a ’sgrìobhadh chun fhaidhle ìomhaigh.",
        "Thachair mearachd fhad ’s a bha thu a’ leughadh an stòr.",
        "Tagh inneal dligheach.",
        "Cha ghabh toirt air falbh an tomhas-lìonaidh no an inneal a ghlasadh",
        "Cha ghabh meudan a chunntadh air inneal",
        "Cha ghabh an tomhas-lìonaidh fhosgladh",
        "Thachair mearachd fhad ‘s a bha e a’ fosgladh an inneal.",
        "Cha ghabh faidhle ìomhaigh a chruthachadh.",
        "Níor tacaíodh le ZIP Criptithe",
        "Modh comhbhrú gan tacaíocht i ZIP",
        "Earráid dhí-chomhbhrúite",
        "Roghnaigh comhad foinse inléite le do thoil.",
        "Dèanta. Ìomhaigh air a sgrìobhadh gu soirbheachail ann an %02d:%02d:%02d.",
        "%d uair an chloig agus %d nóiméad fágtha",
        "%d uair an chloig agus %d fágtha nóiméad",
        "%d uair an chloig agus %d nóiméad fágtha",
        "%d uair an chloig agus %d fágtha nóiméad",
        "%d nóiméad fágtha",
        "%d nóiméad fágtha",
        "níos lú ná nóiméad fágtha",
        "go dtí seo",

        "OK",
        "Dé Domhnaigh",
        "Dé Luain",
        "Dé Máirt",
        "Dé Céadaoin",
        "Déardaoin",
        "Dé hAoine",
        "Dé Sathairn",
        "Inné",
        "Díreach anois",
        "%d nóiméad ó shin",
        "%d uair an chloig ó shin",
        "uair an chloig ó shin",
        "Oscailte",
        "Cealaigh",
        "A Úsáideadh Le Déanaí",
        "Baile",
        "Deasg",
        "Íoslódáilte",
        "Córas Comhaid",
        "Ainm",
        "Méid",
        "Athraithe",
        "Taispeáin gach comhad"
    },
    {
        "tr",
        "Doğrula",
        "Sıkıştır",
        "Yaz",
        "Oku",
        "Gönder",
        "Seri port",
        "MiB",
        "GiB",

        "Hata",
        "İstemci bekleniyor",
        "İletişim hatası",
        "Yazma doğrulanamadı.",
        "Hedef cihaza yazılırken bir hata oluştu.",
        "Görüntü dosyasına yazılırken bir hata oluştu.",
        "Kaynak okunurken bir hata oluştu.",
        "Lütfen geçerli bir cihaz seçin.",
        "Disk bölümü çıkarılamıyor veya cihaz kilitlenemiyor",
        "Cihazdaki disk bölümleri düzeltilemiyor",
        "Disk bölümü açılamıyor",
        "Cihaz açılırken bir hata oluştu.",
        "Görüntü dosyası oluşturulamıyor.",
        "Şifreli ZIP desteklenmiyor",
        "ZIP'te desteklenmeyen sıkıştırma yöntemi",
        "Sıkıştırılanı açma hatası",
        "Lütfen okunabilir bir kaynak dosya seçin.",
        "Bitti. Görüntü %02d:%02d:%02d içerisinde başarıyla yazıldı.",
        "%d saat ve %d dakika kaldı",
        "%d saat ve %d dakika kaldı",
        "%d saat ve %d dakika kaldı",
        "%d saat ve %d dakika kaldı",
        "%d dakika kaldı",
        "%d dakika kaldı",
        "bir dakikadan az kaldı",
        "şimdiye kadar",

        "Tamam",
        "Pazar",
        "Pazartesi",
        "Salı",
        "Çarşamba",
        "Perşembe",
        "Cuma",
        "Cumartesi",
        "dün",
        "Az önce",
        "%d dakika önce",
        "%d saat önce",
        "bir saat önce",
        "Açık",
        "İptal",
        "Son Kullanılanlar",
        "Ev",
        "Masaüstü",
        "İndirilenler",
        "Dosya sistemi",
        "Ad",
        "Boyut",
        "Düzenleme",
        "Tüm dosyaları göster"
    },
    {
        "el",
        "Επαληθεύω",
        "Συμπιέζω",
        "Γράφω",
        "Ανάγνωση",
        "Στείλετε",
        "Σειριακή θύρα",
        "MiB",
        "GiB",

        "Λάθος",
        "Αναμονή για πελάτη",
        "Σφάλμα επικοινωνίας",
        "Η εγγραφή απέτυχε.",
        "Παρουσιάστηκε σφάλμα κατά την εγγραφή στη συσκευή προορισμού.",
        "Παρουσιάστηκε σφάλμα κατά την εγγραφή στο αρχείο εικόνας.",
        "Παρουσιάστηκε σφάλμα κατά την ανάγνωση της πηγής.",
        "Επιλέξτε μια έγκυρη συσκευή.",
        "Δεν είναι δυνατή η κατάργηση της έντασης ή η κλειδώματος της συσκευής",
        "Δεν είναι δυνατή η ρύθμιση των τόμων στη συσκευή",
        "Δεν είναι δυνατή η ανοίξη της έντασης",
        "Παρουσιάστηκε σφάλμα κατά το άνοιγμα της συσκευής.",
        "Δεν είναι δυνατή η δημιουργία αρχείου εικόνας.",
        "Το κρυπτογραφημένο ZIP δεν υποστηρίζεται",
        "Μη υποστηριζόμενη μέθοδος συμπίεσης σε ZIP",
        "Σφάλμα αποσυμπιεστή",
        "Επιλέξτε ένα ευανάγνωστο αρχείο προέλευσης.",
        "Ολοκληρώθηκε. Η εικόνα γράφτηκε με επιτυχία στο %02d:%02d:%02d.",
        "%d ώρες και %d λεπτά αριστερά",
        "%d ώρες και %d λεπτά αριστερά",
        "%d ώρα και %d λεπτά αριστερά",
        "%d ώρα και %d λεπτά αριστερά",
        "Απομένουν %d λεπτά",
        "%d λεπτά αριστερά",
        "λιγότερο από ένα λεπτό",
        "μέχρι τώρα",

        "Εντάξει",
        "Κυριακή",
        "Δευτέρα",
        "Τρίτη",
        "Αύγουστος",
        "Πέμπτη",
        "Παρασκευή",
        "Σάββατο",
        "Εχθές",
        "Μόλις τώρα",
        "%d λεπτά πριν",
        "πριν από %d ώρες",
        "πριν από μία ώρα",
        "Ανοιξε",
        "Ματαίωση",
        "Πρόσφατα χρησιμοποιημένο",
        "Σπίτι",
        "Επιφάνεια εργασίας",
        "Λήψεις",
        "Σύστημα αρχείων",
        "Ονομα",
        "Μέγεθος",
        "Τροποποιήθηκε",
        "Εμφάνιση όλων των αρχείων"
    },
    {
        "ru",
        "Проверить",
        "Сжать",
        "Записать",
        "Прочитать",
        "Передать",
        "Последовательный порт",
        "МБ",
        "ГБ",

        "Ошибка",
        "Ожидание клиента",
        "Ошибка связи",
        "Проверка записи не удалась.",
        "Произошла ошибка при записи на целевое устройство.",
        "Произошла ошибка при записи в файл изображения.",
        "Произошла ошибка при чтении источника.",
        "Пожалуйста, выберите подходящее устройство.",
        "Невозможно отключить том или заблокировать устройство",
        "Невозможно размонтировать тома на устройстве",
        "Невозможно открыть том",
        "Произошла ошибка при открытии устройства.",
        "Невозможно создать файл изображения.",
        "Зашифрованный ZIP не поддерживается",
        "Неподдерживаемый метод сжатия в ZIP",
        "Ошибка декомпрессора",
        "Пожалуйста, выберите читаемый исходный файл.",
        "Выполнено. Изображение успешно записано в %02d:%02d:%02d.",
        "%d часов и %d минуты осталось",
        "%d часов и %d минут осталось",
        "%d часа и %d минуты осталось",
        "%d часа и %d минут осталось",
        "осталось %d минут",
        "%d минуты осталось",
        "осталось меньше минуты",
        "до сих пор",

        "OK",
        "Воскресенье",
        "Понедельник",
        "Вторник",
        "среда",
        "Четверг",
        "Пятница",
        "суббота",
        "Вчера",
        "Прямо сейчас",
        "%d минут назад",
        "%d часов назад",
        "час назад",
        "Открыто",
        "Отмена",
        "Недавно использованный",
        "Домой",
        "Рабочий стол",
        "Загрузки",
        "Файловая система",
        "Имя",
        "Размер",
        "Изменённый",
        "Показать все файлы"
    },
    {
        "uk",
        "Перевірити",
        "Стиснути",
        "Записати",
        "Прочитати",
        "Надіслати",
        "Послідовний порт",
        "МБ",
        "ГБ",

        "Помилка",
        "Очікування клієнта",
        "Помилка з'єднання",
        "Невдала перевірка писання",
        "Сталася помилка підчас писання в цільовий пристрій.",
        "Сталася помилка підчас писання в файл образу.",
        "Сталася помилка підчас читання джерела.",
        "Будь ласка, виберіть правильний пристрій.",
        "Неможливо розмонтувати том або захопити (заблокувати) пристрій",
        "Неможливо розмонтувати томи на пристрої",
        "Неможливо відкрити том",
        "Трапилася помилка підчас відкривання пристрою.",
        "Неможливо створити файл образу.",
        "Зашифрований ZIP не підтримується",
        "Непідтримуваний метод стиснення в ZIP",
        "Помилка розтиснення",
        "Будь ласка, виберіть вхідний, гожий для читання файл.",
        "Зроблено. Образ записано вдало за %02d:%02d:%02d.",
        "лишилось %d годин і %d хвилин",
        "лишилось %d годин і %d хвилина",
        "лишилась %d година і %d хвилин",
        "лишилась %d година і %d хвилина",
        "лишилось %d хвилин",
        "лишилась %d хвилина",
        "лишилось менше, ніж хвилина.",
        "покищо",

        "Добре",
        "Неділя",
        "Понеділок",
        "Вівторок",
        "Середа",
        "Четвер",
        "П'ятниця",
        "Субота",
        "Вчора",
        "Зараз",
        "%d хвилин тому",
        "%d годин тому",
        "годину тому",
        "Відкрити",
        "Скасувати",
        "Недавно використані",
        "Додому",
        "Десктоп",
        "Завантаження",
        "Файлове дерево",
        "Ім'я",
        "Розмір",
        "Змінено",
        "Показати всі файли"
    },
    {
        "jp",
        "ベリファイ",
        "圧縮",
        "書き込み",
        "読み込み",
        "送信",
        "シリアルポート",
        "MiB",
        "GiB",

        "エラー",
        "クライアントを待機中",
        "通信エラー",
        "書き込みのベリファイに失敗しました",
        "対象デバイスへの書き込み中にエラーが発生しました。",
        "イメージファイルへの書き込み中にエラーが発生しました。",
        "ソースの読み込み中にエラーが発生しました。",
        "有効なデバイスを選択してください。",
        "ボリュームをマウント解除できないか、デバイスをロックできません。",
        "デバイス上のボリュームをアンマウントできません。",
        "ボリュームを開けません。",
        "デバイスを開くときにエラーが発生しました。",
        "イメージファイルを作成できません。",
        "暗号化された ZIP はサポートされていません。",
        "ZIP でサポートされていない圧縮方法です。",
        "解凍エラー",
        "読み込み可能なソースファイルを選択してください。",
        "完了しました。所要時間 %02d:%02d:%02d でイメージが正常に書き込まれました。",
        "残り %d 時間と %d 分",
        "残り %d 時間と %d 分",
        "残り %d 時間と %d 分",
        "残り %d 時間と %d 分",
        "残り %d 分",
        "残り %d 分",
        "残り 1 分未満",
        "書き込み済み",

        "OK",
        "日曜日",
        "月曜日",
        "火曜日",
        "水曜日",
        "木曜日",
        "金曜日",
        "土曜日",
        "昨日",
        "ちょうど今",
        "%d 分前",
        "%d 時間前",
        "1 時間前",
        "開く",
        "キャンセル",
        "最近使用した",
        "ホーム",
        "デスクトップ",
        "ダウンロード",
        "ファイルシステム",
        "名前",
        "サイズ",
        "変更日時",
        "すべてのファイルを表示"
    },
    {
        "zh",
        "校验",
        "压缩",
        "写入",
        "读取",
        "发送",
        "串行端口",
        "MB",
        "GB",

        "错误",
        "等待客户端",
        "通信故障",
        "写入验证失败。",
        "写入目标设备时发生错误。",
        "写入镜像文件时发生错误。",
        "读取源时发生错误。",
        "请选择一个有效的设备。",
        "无法卸载磁盘或锁定设备",
        "无法在设备上卸载磁盘",
        "无法打开磁盘",
        "打开设备时发生错误。",
        "无法创建镜像文件。",
        "不支持加密的zip",
        "不支持该zip的压缩算法",
        "解压错误",
        "请选择可读的源文件。",
        "完成，镜像已成功写入，用时%02d:%02d:%02d。",
        "还剩%d小时%d分钟",
        "还剩%d小时%d分钟",
        "还剩%d小时%d分钟",
        "还剩%d小时%d分钟",
        "还剩%d分钟",
        "还剩%d分钟",
        "还剩不到一分钟",
        "已写入",

        "确认",
        "星期日",
        "星期一",
        "星期二",
        "星期三",
        "星期四",
        "星期五",
        "星期六",
        "昨天",
        "刚刚",
        "%d分钟前",
        "%d小时前",
        "一小时前",
        "打开",
        "取消",
        "最近使用",
        "用户目录",
        "桌面",
        "下载",
        "文件系统",
        "名称",
        "大小",
        "修改时间",
        "显示所有文件"
    },
    {
        "ko",
        "검증",
        "압축",
        "쓰기",
        "읽기",
        "보내기",
        "시리얼 포트",
        "MiB",
        "GiB",

        "오류",
        "클라이언트 대기 중",
        "통신 오류",
        "쓰기 검증을 실패하였습니다.",
        "대상 장치에 쓰기 중 오류가 발생하였습니다.",
        "이미지 파일에 쓰기 중 오류가 발생하였습니다.",
        "소스를 읽는 중 오류가 발생하였습니다.",
        "유효한 장치를 선택하시오.",
        "볼륨을 분리하거나 장치를 잠글 수 없습니다",
        "장치에서 볼륨을 분리할 수 없습니다",
        "볼륨을 열 수 없습니다",
        "장치를 여는 중 오류가 발생하였습니다.",
        "이미지 파일을 생성할 수 없습니다.",
        "암호화된 ZIP은 지원되지 않습니다",
        "지원되지 않는 ZIP 압축 방법",
        "압축 풀기 중 오류",
        "읽기 가능한 소스 파일을 선택하시오.",
        "%02d:%02d:%02d에 이미지 쓰기를 성공적으로 완료하였습니다.",
        "%d 시간 %d 분이 남았습니다.",
        "%d 시간 %d 분이 남았습니다.",
        "%d 시간 %d 분이 남았습니다.",
        "%d 시간 %d 분이 남았습니다.",
        "%d 분이 남았습니다.",
        "%d 분이 남았습니다.",
        "1 분 미만이 남았습니다.",
        "지금까지",

        "예",
        "일요일",
        "월요일",
        "화요일",
        "수요일",
        "목요일",
        "금요일",
        "토요일",
        "어제",
        "곧",
        "%d 분 전",
        "%d 시간 전",
        "한 시간 전",
        "열기",
        "취소",
        "최근 사용",
        "홈",
        "바탕 화면",
        "다운로드",
        "파일 시스템",
        "이름",
        "크기",
        "수정",
        "모든 파일 표시"
    }
};
