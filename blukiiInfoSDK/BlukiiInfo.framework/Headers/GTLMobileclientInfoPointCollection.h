/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2016 Google Inc.
 */

//
//  GTLMobileclientInfoPointCollection.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   mobileclient/v1
// Description:
//   This is an API
// Classes:
//   GTLMobileclientInfoPointCollection (0 custom class methods, 1 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLMobileclientInfoPoint;

// ----------------------------------------------------------------------------
//
//   GTLMobileclientInfoPointCollection
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLMobileclientInfoPointCollection : GTLCollectionObject
@property (nonatomic, retain) NSArray *items;  // of GTLMobileclientInfoPoint
@end