#include <iostream>
#include <string>

int main()
{
    std::string nama_item = "";
    std::string prev_item = "";
    std::string item_terhebat = "";
    std::string item_terlemah = "";
    char lagi = 'y';
    float stat = 0;
    float prev_stat = 0;
    float stat_terhebat = 0;
    float stat_terlemah = 0;
    bool first = true;

    while(lagi=='y') {
        std::cout << "Masukkan nama item : ";
        std::cin >> nama_item;
        std::cout << "Masukkan stat : ";
        std::cin >> stat;
        std::cout << "Item Anda adalah : " << nama_item;
        std::cout << "\nStat : " << stat;
        if (first == true) {
            prev_item = "Nothing";
            item_terhebat = nama_item;
            item_terlemah = nama_item;
            stat_terhebat = stat;
            stat_terlemah = stat;
        } else {
            if(stat >= stat_terhebat) {
                stat_terhebat = stat;
                item_terhebat = nama_item;
            }else{
                if(stat <= stat_terlemah) {
                    stat_terlemah = stat;
                    item_terlemah = nama_item;
                }
            }
        }

        std::cout << "\nItem sebelumnya : " << prev_item;
        std::cout << "\nItem terhebat : " << item_terhebat;
        std::cout << "\nItem terlemah : " << item_terlemah;
        prev_item = nama_item;
        prev_stat = stat;
        first = false;
        std::cout << "\nInput item lagi ? (y/n)" << std::endl;
        std::cin >> lagi;
    }
    char ch; std::cin >> ch;
    return 0;
}
