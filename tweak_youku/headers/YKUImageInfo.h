//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIImage;

@interface YKUImageInfo : NSObject
{
    unsigned int _index;
    CIImage *_image;
    double _timeBound;
}

@property(nonatomic) double timeBound; // @synthesize timeBound=_timeBound;
@property(retain, nonatomic) CIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (void).cxx_destruct;

@end

