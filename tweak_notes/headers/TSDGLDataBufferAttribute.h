//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TSDGLDataArrayBuffer, TSDGLDataBuffer;

@interface TSDGLDataBufferAttribute : NSObject
{
    _Bool _isNormalized;
    unsigned int _bufferUsage;
    int _dataType;
    int _componentCount;
    int _locationInShader;
    NSString *_name;
    unsigned long long _bufferOffset;
    TSDGLDataArrayBuffer *_dataArrayBuffer;
    TSDGLDataBuffer *_dataBuffer;
}

+ (id)attributeWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(int)arg3 normalized:(_Bool)arg4 componentCount:(unsigned long long)arg5;
@property(nonatomic) TSDGLDataBuffer *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(nonatomic) TSDGLDataArrayBuffer *dataArrayBuffer; // @synthesize dataArrayBuffer=_dataArrayBuffer;
@property(nonatomic) unsigned long long bufferOffset; // @synthesize bufferOffset=_bufferOffset;
@property(nonatomic) int locationInShader; // @synthesize locationInShader=_locationInShader;
@property(readonly, nonatomic) _Bool isNormalized; // @synthesize isNormalized=_isNormalized;
@property(readonly, nonatomic) int componentCount; // @synthesize componentCount=_componentCount;
@property(readonly, nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) unsigned int bufferUsage; // @synthesize bufferUsage=_bufferUsage;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)setComponentCount:(int)arg1;
- (void)setBufferUsage:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(int)arg3 normalized:(_Bool)arg4 componentCount:(unsigned long long)arg5;

@end

