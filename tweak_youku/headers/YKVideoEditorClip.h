//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKVideoEditorProgram;

@interface YKVideoEditorClip : NSObject
{
    struct CYKVideoEditorClip *_pClip;
    _Bool _muted;
    YKVideoEditorProgram *_program;
    double _position;
}

+ (id)clipWithFileUrl:(id)arg1 type:(int)arg2;
+ (id)clipWithImagePath:(id)arg1 type:(int)arg2;
+ (id)clipWithFilePath:(id)arg1 type:(int)arg2;
+ (id)clipWithContent:(id)arg1 type:(int)arg2;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak YKVideoEditorProgram *program; // @synthesize program=_program;
- (void).cxx_destruct;
- (int)GetOriginalRotation;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
@property(nonatomic) double duration;
@property(nonatomic) void *internalClip;
- (id)valueOfProperty:(id)arg1;
- (id)initWithImagePath:(id)arg1 type:(int)arg2;
- (id)initWithFilePath:(id)arg1 type:(int)arg2;
- (id)initWithContent:(id)arg1 type:(int)arg2;
- (struct CYKVideoEditorClip *)internalClipPtr;
- (id)initWithInternalClipPtr:(struct CYKVideoEditorClip *)arg1;

@end

