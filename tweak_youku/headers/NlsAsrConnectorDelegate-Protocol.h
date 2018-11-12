//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NlsRecognizerResult;

@protocol NlsAsrConnectorDelegate <NSObject>
- (void)connectorDidFailWithError:(NSError *)arg1;
- (void)connectorDidStopRecieveTTSData;
- (void)connectorDidStartRecieveTTSData;
- (void)connectorDidCompleteWithVoiceData:(NSData *)arg1;
- (void)connectorDidCompleteWithResult:(NlsRecognizerResult *)arg1;
@end

