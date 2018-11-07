// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =

     "\n ________                       .___      _________               .__      \n"
     "  /  _____/_____ _______ __ __  __| _/____  \_   ___ \_____    _____|  |__   \n"
     " /   \  ___\__  \\_  __ \  |  \/ __ |\__  \ /    \  \/\__  \  /  ___/  |  \  \n"
     " \    \_\  \/ __ \|  | \/  |  / /_/ | / __ \\     \____/ __ \_\___ \|   Y  \ \n"
     "  \______  (____  /__|  |____/\____ |(____  /\______  (____  /____  >___|  / \n"
     "         \/     \/                 \/     \/      \/       \/     \/     \/  \n";     

const std::string nonWindowsAsciiArt = 
      "\n                                                                                  \n"
        " ██████╗  █████╗ ██████╗ ██╗   ██╗██████╗  █████╗  ██████╗ █████╗ ███████╗██╗  ██╗\n"
        "██╔════╝ ██╔══██╗██╔══██╗██║   ██║██╔══██╗██╔══██╗██╔════╝██╔══██╗██╔════╝██║  ██║\n"
        "██║  ███╗███████║██████╔╝██║   ██║██║  ██║███████║██║     ███████║███████╗███████║\n"
        "██║   ██║██╔══██║██╔══██╗██║   ██║██║  ██║██╔══██║██║     ██╔══██║╚════██║██╔══██║\n"
        "╚██████╔╝██║  ██║██║  ██║╚██████╔╝██████╔╝██║  ██║╚██████╗██║  ██║███████║██║  ██║\n"
        " ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═════╝ ╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝\n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
