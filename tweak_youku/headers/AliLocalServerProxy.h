//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface AliLocalServerProxy : NSObject
{
    NSArray *_lastDownloadList;
}

+ (id)shareInstanceLocalServer;
@property(retain, nonatomic) NSArray *lastDownloadList; // @synthesize lastDownloadList=_lastDownloadList;
- (void).cxx_destruct;
- (void)prepareArray:(id)arg1;
- (void)prepare:(id)arg1;

@end
