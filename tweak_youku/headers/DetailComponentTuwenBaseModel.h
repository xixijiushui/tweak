//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailCMSCardVideo.h"

@class NSString;

@interface DetailComponentTuwenBaseModel : DetailCMSCardVideo
{
    long long _itemType;
    NSString *_tuwenTitle;
    NSString *_tuwenSubTitle;
}

@property(retain, nonatomic) NSString *tuwenSubTitle; // @synthesize tuwenSubTitle=_tuwenSubTitle;
@property(retain, nonatomic) NSString *tuwenTitle; // @synthesize tuwenTitle=_tuwenTitle;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (long long)itemTypeFromSubType:(id)arg1;
- (_Bool)setupWithCMSInfo:(id)arg1;

@end

