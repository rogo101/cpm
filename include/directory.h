/*
? You may be wondering why in other files, there is no checking if a file (or folder) already exists (or already doesn't exist) when creating or deleting.
? This is because the methods to perform these actions checks file (or folder) existance by default.
*/

#pragma once

#include <string>
#include <fstream>
#include <vector>

namespace directory
{
    // ? Convert file into string
    std::string slurp(std::string dir, std::string filename);

    // ? Check if a string has specific contents
    bool hasContents(std::string text, std::string contents);
    
    bool hasFile(std::string dir, std::string filename);

    bool hasFolder(std::string dir, std::string foldername);

    void createFile(std::string dir, std::string filename);

    void createFolder(std::string dir, std::string foldername);

    void deleteFile(std::string dir, std::string filename);
};