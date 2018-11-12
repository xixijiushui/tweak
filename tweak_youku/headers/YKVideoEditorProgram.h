//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface YKVideoEditorProgram : NSObject
{
    struct CYKVideoEditorProgram *_pProgram;
    struct CYKVideoEditorProgramDelegate *_pDelegate;
    _Bool _mergeFlag;
    _Bool _joinClipsFlag;
    id <YKVideoEditorProgramDelegate> _delegate;
    NSMutableArray *_clips;
}

@property(retain, nonatomic) NSMutableArray *clips; // @synthesize clips=_clips;
@property(nonatomic) _Bool joinClipsFlag; // @synthesize joinClipsFlag=_joinClipsFlag;
@property(nonatomic) _Bool mergeFlag; // @synthesize mergeFlag=_mergeFlag;
@property(nonatomic) id <YKVideoEditorProgramDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelExport;
- (_Bool)exportTo:(id)arg1;
@property(nonatomic) void *internalProgram;
- (void)removeClip:(id)arg1;
- (void)addClip:(id)arg1;
@property(readonly, copy, nonatomic) NSString *programPath;
@property(nonatomic) struct CGSize resolution;
- (void)setRotation:(int)arg1;
- (struct CYKVideoEditorProgram *)internalProgramPtr;
- (id)initWithInternalProgramPtr:(struct CYKVideoEditorProgram *)arg1;

@end
