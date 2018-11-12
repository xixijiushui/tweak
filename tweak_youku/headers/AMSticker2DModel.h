//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AMPositionModel, NSString;

@interface AMSticker2DModel : TBJSONModel
{
    _Bool _rebound;
    _Bool _effects;
    float _width;
    float _height;
    float _changeHeight;
    float _scale;
    float _score;
    NSString *_name;
    NSString *_path;
    NSString *_type;
    AMPositionModel *_position;
}

@property(retain, nonatomic) AMPositionModel *position; // @synthesize position=_position;
@property(nonatomic) _Bool effects; // @synthesize effects=_effects;
@property(nonatomic) _Bool rebound; // @synthesize rebound=_rebound;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float changeHeight; // @synthesize changeHeight=_changeHeight;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

