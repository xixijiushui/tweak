//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VIPCMSPageItem.h"

@class NSMutableArray, VIPCMSJsonClient, VIPVideoHallCMSJsonRequest;

@interface VIPVideoHallCMSPageItem : VIPCMSPageItem
{
    NSMutableArray *_cardVideoArr;
}

@property(retain, nonatomic) NSMutableArray *cardVideoArr; // @synthesize cardVideoArr=_cardVideoArr;
- (void).cxx_destruct;
- (id)pvExtend;
- (id)spmAB;
- (id)pageName;
- (_Bool)isSamePage:(id)arg1;
- (_Bool)setupWithCMSInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) VIPCMSJsonClient *jsonClient;
@property(retain, nonatomic) VIPVideoHallCMSJsonRequest *request;

@end

