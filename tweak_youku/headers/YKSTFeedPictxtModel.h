//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSAttributedString, NSString;

@interface YKSTFeedPictxtModel : NSObject
{
    _Bool _isOverTwoLine;
    NSString *_title;
    NSString *_contId;
    NSAttributedString *_attributedTitle;
    NSArray *_imgs;
    struct CGRect _titleFrame;
}

@property(nonatomic) _Bool isOverTwoLine; // @synthesize isOverTwoLine=_isOverTwoLine;
@property(copy, nonatomic) NSArray *imgs; // @synthesize imgs=_imgs;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *contId; // @synthesize contId=_contId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutTitle;
- (void)setupWithCMSInfo:(id)arg1;

@end
