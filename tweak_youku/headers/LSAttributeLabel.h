//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSAttributedString, NSString;

@interface LSAttributeLabel : UILabel
{
    _Bool _isVR;
    _Bool _isVIP;
    NSString *_attachmentFilePath;
    NSAttributedString *_attchmentText;
}

@property(retain, nonatomic) NSAttributedString *attchmentText; // @synthesize attchmentText=_attchmentText;
@property(retain, nonatomic) NSString *attachmentFilePath; // @synthesize attachmentFilePath=_attachmentFilePath;
@property(nonatomic) _Bool isVIP; // @synthesize isVIP=_isVIP;
@property(nonatomic) _Bool isVR; // @synthesize isVR=_isVR;
- (void).cxx_destruct;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

