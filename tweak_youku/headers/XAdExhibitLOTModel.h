//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XAdExhibitLOTModel : NSObject
{
    double _initWidth;
    double _initHeight;
    double _x;
    double _y;
    double _resWidth;
    double _resHeight;
}

@property(nonatomic) double resHeight; // @synthesize resHeight=_resHeight;
@property(nonatomic) double resWidth; // @synthesize resWidth=_resWidth;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(nonatomic) double initHeight; // @synthesize initHeight=_initHeight;
@property(nonatomic) double initWidth; // @synthesize initWidth=_initWidth;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

