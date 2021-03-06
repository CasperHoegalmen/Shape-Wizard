#include "Avatar.h"
#include <iostream>

using namespace sf;
using namespace std;

Avatar::Avatar() {}

void Avatar::createAvatar(int avatarLabel) {
	if (avatarLabel == 1) {
		avatarTexture.loadFromFile("WizardSheet.png");
	}

	if (avatarLabel == 0) {
		avatarTexture.loadFromFile("WizardDamaged.png");
	}

	avatarSprite.setTexture(avatarTexture);
	decoyAvatarSprite.setTexture(avatarTexture);

	avatarTextureSize = avatarTexture.getSize();
	avatarTextureSize.x /= 20;
	avatarTextureSize.y /= 4;

	avatarX = (float) avatarTextureSize.x;
	avatarY = (float) avatarTextureSize.y;

	avatarSprite.setScale(avatarW, avatarH);
	decoyAvatarSprite.setScale(avatarW / 55.0f, avatarH / 5.2f);

	avatarSprite.setOrigin(avatarSprite.getGlobalBounds().width / 40 , avatarSprite.getGlobalBounds().height / 40);
	avatarSprite.setPosition((float)(gameW / 2) + 20.0f, (float)(gameH / 2) - (float)gameH * 0.05f);

	decoyAvatarSprite.setOrigin(avatarSprite.getGlobalBounds().width / 40 - 30.0f, avatarSprite.getGlobalBounds().height / 40);
	decoyAvatarSprite.setPosition((float)(gameW / 2) - 40.0f, (float)(gameH / 2) - (float)gameH * 0.05f);

	cout << "................... >:( " << endl;
}

Avatar::~Avatar()
{
}
