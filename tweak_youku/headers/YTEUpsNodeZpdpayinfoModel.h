//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTEBaseModel.h"

@class NSArray, NSString;

@interface YTEUpsNodeZpdpayinfoModel : YTEBaseModel
{
    _Bool _play;
    NSString *_oriprice;
    NSArray *_paytype;
    NSString *_coprice;
    NSString *_duration;
}

@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *coprice; // @synthesize coprice=_coprice;
@property(copy, nonatomic) NSArray *paytype; // @synthesize paytype=_paytype;
@property(copy, nonatomic) NSString *oriprice; // @synthesize oriprice=_oriprice;
@property(nonatomic) _Bool play; // @synthesize play=_play;

@end

