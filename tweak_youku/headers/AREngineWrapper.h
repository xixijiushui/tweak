//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AREngineWrapper : NSObject
{
    struct FalconRecogEngineBase *curEng;
    int restFailCnt;
}

- (id)convertRGBToUIImage:(char *)arg1 width:(int)arg2 height:(int)arg3 nchanel:(int)arg4;
- (void)releaseEngine;
- (_Bool)isTrackEngine;
- (id)recgonizeFrame:(char *)arg1 uvBase:(char *)arg2 imageWidth:(int)arg3 imageHeight:(int)arg4 refRect:(struct CGRect)arg5;
- (id)getrecid:(id)arg1;
- (id)buildData:(_Bool)arg1 resultName:(id)arg2;
- (vector_9492931a)rePackPath:(id)arg1;
- (id)initWithMethod:(id)arg1 modelPath:(id)arg2 modelConfig:(id)arg3;

@end
