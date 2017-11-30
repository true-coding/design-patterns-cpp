#include <vector>
#include <string>
#include <fstream>


struct Note
{
    std::string title;
    std::vector<std::string> entries;


    explicit Note(const std::string& title)
            :title{title}
    {
    }

    void add(const std::string& entry)
    {
        entries.push_back(entry);
    }
};

struct PersistenceManager
{
    static void save(const Note& n, const std::string& filename)
    {
        std::ofstream ofs(filename);
            for (auto& s : n.entries)
                ofs << s << std::endl;
    }
};