//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface VIPRankItemModel : NSObject
{
    NSString *_businessKey;
    NSString *_itemId;
    NSString *_value;
}

@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
- (void).cxx_destruct;
- (_Bool)setupWithCMSInfo:(id)arg1;

@end
