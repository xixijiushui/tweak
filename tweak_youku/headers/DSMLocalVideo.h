//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DSMLocalVideo : NSObject
{
    NSString *_vid;
    NSString *_vresolution;
    NSString *_vlanguage;
    NSString *_sequencecount;
    NSString *_seqmd5s;
    NSString *_seqsizes;
    NSString *_trueseqsizes;
    NSString *_trueseqmd5s;
    NSString *_playererrorlevel1;
    NSString *_playererrorlevel2;
    NSString *_playererror;
    NSString *_createtime;
    NSString *_createversion;
    NSString *_taskid;
}

@property(copy, nonatomic) NSString *taskid; // @synthesize taskid=_taskid;
@property(copy, nonatomic) NSString *createversion; // @synthesize createversion=_createversion;
@property(copy, nonatomic) NSString *createtime; // @synthesize createtime=_createtime;
@property(copy, nonatomic) NSString *playererror; // @synthesize playererror=_playererror;
@property(copy, nonatomic) NSString *playererrorlevel2; // @synthesize playererrorlevel2=_playererrorlevel2;
@property(copy, nonatomic) NSString *playererrorlevel1; // @synthesize playererrorlevel1=_playererrorlevel1;
@property(copy, nonatomic) NSString *trueseqmd5s; // @synthesize trueseqmd5s=_trueseqmd5s;
@property(copy, nonatomic) NSString *trueseqsizes; // @synthesize trueseqsizes=_trueseqsizes;
@property(copy, nonatomic) NSString *seqsizes; // @synthesize seqsizes=_seqsizes;
@property(copy, nonatomic) NSString *seqmd5s; // @synthesize seqmd5s=_seqmd5s;
@property(copy, nonatomic) NSString *sequencecount; // @synthesize sequencecount=_sequencecount;
@property(copy, nonatomic) NSString *vlanguage; // @synthesize vlanguage=_vlanguage;
@property(copy, nonatomic) NSString *vresolution; // @synthesize vresolution=_vresolution;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;

@end

