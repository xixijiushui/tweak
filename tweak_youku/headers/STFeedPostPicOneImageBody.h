//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardNewBody.h"

@class NSString, UIImageView;

@interface STFeedPostPicOneImageBody : YKFeedCardNewBody
{
    NSString *_imgUrl;
    UIImageView *_imgView;
}

+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;
- (void)configPlayCardWithDescText:(id)arg1;
- (void)configWithModel:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)postParams;
- (void)relayout;
- (void)fillUI;

@end

