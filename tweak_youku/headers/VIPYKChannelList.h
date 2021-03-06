//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMSComponentContext, NSMutableArray, NSString;

@interface VIPYKChannelList : NSObject
{
    CMSComponentContext *_compenentContext;
    NSString *_title;
    NSString *_backgroundImg;
    long long _selectIndex;
    NSMutableArray *_items;
    NSString *_cardVideoClass;
}

@property(retain, nonatomic) NSString *cardVideoClass; // @synthesize cardVideoClass=_cardVideoClass;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSString *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak CMSComponentContext *compenentContext; // @synthesize compenentContext=_compenentContext;
- (void).cxx_destruct;
- (void)setupWithCMSInfo:(id)arg1;

@end

