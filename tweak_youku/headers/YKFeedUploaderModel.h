//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSCardVideo.h"

@class NSString;

@interface YKFeedUploaderModel : CMSCardVideo
{
    _Bool _subscribe;
    _Bool _hasUserIndex;
    NSString *_name;
    NSString *_avatar;
    NSString *_desc;
}

@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool hasUserIndex; // @synthesize hasUserIndex=_hasUserIndex;
@property(nonatomic) _Bool subscribe; // @synthesize subscribe=_subscribe;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)setupWithCMSInfo:(id)arg1;

@end
