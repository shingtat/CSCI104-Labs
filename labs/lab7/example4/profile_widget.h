#ifndef PROFILE_WIDGET_H
#define PROFILE_WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <string>

class ProfileWidget : public QWidget {
	Q_OBJECT 

	public:
		ProfileWidget(std::string, std::string, std::string);
		~ProfileWidget();

	private slots: //what you want to run if button is clicked
		void addFriend();

	private:
		QVBoxLayout* layout;
		QLabel* nameLabel;
		QLabel* emailLabel;
		QLabel* websiteLabel;
		QPushButton* addFriendButton;
		QPushButton* messageButton;
};

#endif
