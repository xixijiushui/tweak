//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHPacketBase.h"

@class NSString;

@interface TVHPacketImeStartInput : TVHPacketBase
{
    int _inputType;
    int _actionID;
    int _options;
    NSString *_actionLabel;
    NSString *_hintText;
    NSString *_existedText;
}

@property(copy, nonatomic) NSString *existedText; // @synthesize existedText=_existedText;
@property(copy, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(copy, nonatomic) NSString *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(nonatomic) int options; // @synthesize options=_options;
@property(nonatomic) int actionID; // @synthesize actionID=_actionID;
@property(nonatomic) int inputType; // @synthesize inputType=_inputType;
- (void).cxx_destruct;
- (void)decodeWithPacket:(struct tagTVHRemoteControlPacket *)arg1;

@end

