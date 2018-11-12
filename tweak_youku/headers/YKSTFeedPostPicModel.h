//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSAttributedString, NSString;

@interface YKSTFeedPostPicModel : NSObject
{
    _Bool _hasLineBreak;
    _Bool _canDelete;
    _Bool _canTop;
    NSArray *_imgs;
    NSString *_contId;
    NSString *_content;
    NSAttributedString *_attributedTitle;
    double _bodyH;
    NSString *_typeTag;
    struct CGSize _imgSize;
    struct CGRect _titleFrame;
}

@property(copy, nonatomic) NSString *typeTag; // @synthesize typeTag=_typeTag;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize=_imgSize;
@property(nonatomic) double bodyH; // @synthesize bodyH=_bodyH;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(nonatomic) _Bool canTop; // @synthesize canTop=_canTop;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) _Bool hasLineBreak; // @synthesize hasLineBreak=_hasLineBreak;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *contId; // @synthesize contId=_contId;
@property(copy, nonatomic) NSArray *imgs; // @synthesize imgs=_imgs;
- (void).cxx_destruct;
- (void)layoutMoreImage;
- (void)layoutOneImage;
- (void)layoutNoImage;
- (struct CGSize)contentBoundingSizeWithFont:(id)arg1;
- (void)layoutContent2;
- (void)layoutContent1;
- (void)setupWithCMSInfo:(id)arg1 andTag:(id)arg2;

@end
