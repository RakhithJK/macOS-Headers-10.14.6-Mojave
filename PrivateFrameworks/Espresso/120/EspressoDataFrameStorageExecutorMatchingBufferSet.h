//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EspressoDataFrameStorageExecutorMatchingBufferSet : NSObject
{
    unsigned long long _index;
    NSString *_name;
    struct __CVBuffer *_computed_pb;
    CDStruct_0a65202a _reference_buffer;
    CDStruct_0a65202a _computed_buffer;
    CDStruct_0a65202a _groundtruth_buffer;
}

@property CDStruct_0a65202a groundtruth_buffer; // @synthesize groundtruth_buffer=_groundtruth_buffer;
@property struct __CVBuffer *computed_pb; // @synthesize computed_pb=_computed_pb;
@property CDStruct_0a65202a computed_buffer; // @synthesize computed_buffer=_computed_buffer;
@property CDStruct_0a65202a reference_buffer; // @synthesize reference_buffer=_reference_buffer;
@property(retain) NSString *name; // @synthesize name=_name;
@property unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;

@end
