//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class UIColor;

@interface LFRMComboLabel : UILabel
{
    UIColor *_textBorderColor;
    double _textBorderWidth;
}

@property(nonatomic) double textBorderWidth; // @synthesize textBorderWidth=_textBorderWidth;
@property(retain, nonatomic) UIColor *textBorderColor; // @synthesize textBorderColor=_textBorderColor;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

