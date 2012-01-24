#include "cryptopp/hkdf.h"

using namespace CryptoPP;
using namespace std;

namespace tokencrypto {
    const int DEFAULT_SALT_SIZE = 128;
    const int DEFAULT_KEY_SIZE = 128;

	byte* generateRandomSalt(int size);
	byte* deriveKey(int size, byte* ikm, int ikm_size, byte* salt, int salt_size);
	void writeFile(string filename, byte* content, int size);
	byte* readFile(string filename);
}
