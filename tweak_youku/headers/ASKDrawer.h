//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASKDrawerTitleItem, NSString;

@interface ASKDrawer : NSObject
{
    int _drawerType;
    NSString *_drawerIdentifier;
    ASKDrawerTitleItem *_titleItem;
    NSString *_ykChannelIdentifier;
}

@property(copy, nonatomic) NSString *ykChannelIdentifier; // @synthesize ykChannelIdentifier=_ykChannelIdentifier;
@property(retain, nonatomic) ASKDrawerTitleItem *titleItem; // @synthesize titleItem=_titleItem;
@property(nonatomic) int drawerType; // @synthesize drawerType=_drawerType;
@property(copy, nonatomic) NSString *drawerIdentifier; // @synthesize drawerIdentifier=_drawerIdentifier;
- (void).cxx_destruct;

@end

