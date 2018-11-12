//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface LFDropGiftModel : NSObject
{
    NSString *_roomID;
    NSString *_targetUserID;
    NSNumber *_giftID;
    NSNumber *_giftType;
    NSString *_flowingImageURL;
    NSString *_giftImageURL;
    NSString *_title;
    NSString *_message;
    NSString *_giftName;
}

@property(copy, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *giftImageURL; // @synthesize giftImageURL=_giftImageURL;
@property(copy, nonatomic) NSString *flowingImageURL; // @synthesize flowingImageURL=_flowingImageURL;
@property(retain, nonatomic) NSNumber *giftType; // @synthesize giftType=_giftType;
@property(retain, nonatomic) NSNumber *giftID; // @synthesize giftID=_giftID;
@property(copy, nonatomic) NSString *targetUserID; // @synthesize targetUserID=_targetUserID;
@property(copy, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

