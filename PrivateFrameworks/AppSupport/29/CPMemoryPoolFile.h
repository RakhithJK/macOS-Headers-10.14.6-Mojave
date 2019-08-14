//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPMemoryPoolFile : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;
    int _fd;
    char *_slots;
    unsigned long long _slotCount;
    unsigned long long _slotLength;
    struct __CFBitVector *_usedSlots;
    struct __CFAllocator *_deallocator;
}

- (void)returnSlot:(void *)arg1;
- (id)nextSlotWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithLabel:(const char *)arg1 slotCount:(unsigned long long)arg2 slotLength:(unsigned long long)arg3;

@end

