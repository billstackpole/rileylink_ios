//
//  TPKeyboardAvoidingCollectionView.h
//  TPKeyboardAvoiding
//
//  Created by Michael Tyson on 30/09/2013.
//  Copyright 2015 A Tasty Pixel & The CocoaBots. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIScrollView+TPKeyboardAvoidingAdditions.h"

@interface TPKeyboardAvoidingCollectionView : UICollectionView <UITextFieldDelegate, UITextViewDelegate>
@property (NS_NONATOMIC_IOSONLY, readonly) BOOL focusNextTextField;
- (void)scrollToActiveTextField;
@end
