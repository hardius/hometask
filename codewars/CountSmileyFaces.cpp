int countSmileys(std::vector<std::string> arr)
{
    if (arr.size() == 0) return 0;
    int cnt = 0;
    bool proper_eyes, proper_nose, proper_mouth;
    for (size_t i = 0; i < arr.size(); ++i) {
        std::string curr_face = arr[i];
        proper_eyes = (curr_face[0] == ':' || curr_face[0] == ';') ? true : false;
        if (curr_face.size() == 2) { // without nose
            proper_nose = true;
            proper_mouth = (curr_face[1] == 'D' || curr_face[1] == ')') ? true : false;
        } else {
            proper_nose = (curr_face[1] == '-' || curr_face[1] == '~') ? true : false;
            proper_mouth = (curr_face[2] == 'D' || curr_face[2] == ')') ? true : false;
        }
        if (proper_eyes && proper_nose && proper_mouth) ++cnt;
    }

    return cnt;
}