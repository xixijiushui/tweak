//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UITextView;

@interface LFMicListEmptyView : UIView
{
    UITextView *_messageView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) __weak UITextView *messageView; // @synthesize messageView=_messageView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

