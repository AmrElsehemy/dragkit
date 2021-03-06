//
//  DragView.h
//  Drag
//
//  Created by Zac White on 4/20/10.
//  Copyright 2010 Zac White. All rights reserved.
//DragView

#import <UIKit/UIKit.h>

@interface DragView : UIView {
	UIImageView *thumbnailView;
	UILabel *topLabel;
	UILabel *bottomLabel;
}

@property (nonatomic, retain) UIImageView *thumbnailView;
@property (nonatomic, retain) UILabel *topLabel;
@property (nonatomic, retain) UILabel *bottomLabel;

@end
