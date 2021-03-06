//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardNewBody.h"

@class MarginLabel, NSAttributedString, NSString, UIImageView;

@interface STFeedPictxtSinglePicBody : YKFeedCardNewBody
{
    NSAttributedString *_descText;
    MarginLabel *_descLabel;
    NSString *_imgUrl;
    UIImageView *_coverImgView;
}

+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) UIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) MarginLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(copy, nonatomic) NSAttributedString *descText; // @synthesize descText=_descText;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)articleDetailParamsFromModel:(id)arg1;
- (id)articleParamsWithStartComment:(_Bool)arg1;
- (id)needExposeExtendsWithModel:(id)arg1;
- (void)configWithModel:(id)arg1;
- (void)relayout;
- (void)fillUI;

@end

