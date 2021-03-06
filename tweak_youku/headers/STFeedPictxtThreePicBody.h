//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardNewBody.h"

@class NSArray, NSAttributedString, NSMutableArray, UILabel;

@interface STFeedPictxtThreePicBody : YKFeedCardNewBody
{
    NSAttributedString *_descText;
    UILabel *_descLabel;
    NSArray *_imgs;
    NSMutableArray *_coverImgViews;
}

+ (struct CGSize)contentBoundingSizeWithFont:(id)arg1;
+ (float)txtHeightForModel:(id)arg1;
+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) NSMutableArray *coverImgViews; // @synthesize coverImgViews=_coverImgViews;
@property(copy, nonatomic) NSArray *imgs; // @synthesize imgs=_imgs;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(copy, nonatomic) NSAttributedString *descText; // @synthesize descText=_descText;
- (void).cxx_destruct;
- (id)attributedContentForModel:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)articleDetailParamsFromModel:(id)arg1;
- (id)articleParamsWithStartComment:(_Bool)arg1;
- (id)needExposeExtendsWithModel:(id)arg1;
- (void)configWithModel:(id)arg1;
- (void)relayout;
- (void)fillUI;

@end

