#include <QString>
#include <QFont>
#include "post_widget.h"

PostWidget::PostWidget(Post* p) {
	post = p;
	layout = new QGridLayout();

	// ADD YOUR CODE HERE.
	// Create the suitable labels and add them to GridLayout properly.
	titleLabel = new QLabel(QString::fromStdString(post->title));
	usernameLabel = new QLabel(QString::fromStdString(post->username));
	subredditLabel = new QLabel(QString::fromStdString(post->subreddit));
	urlLabel = new QLabel(QString::fromStdString(post->url));
	karmaLabel = new QLabel("Temp");

	layout->addWidget(titleLabel, 0, 0, 1, 3);
	layout->addWidget(usernameLabel, 1,5, 2,2);
	layout->addWidget(subredditLabel,1,0, 1,3); //row 0, col 0, spans 1 row, covers 3 columns
	layout->addWidget(urlLabel, 3,0,1,3);


	setLayout(layout);
}

PostWidget::~PostWidget() {
	delete titleLabel;
	delete usernameLabel;
	delete subredditLabel;
	delete urlLabel;
	delete karmaLabel;
	delete layout;
}
