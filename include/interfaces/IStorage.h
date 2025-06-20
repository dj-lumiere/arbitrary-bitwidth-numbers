//
// Created by Lumi on 25. 6. 16.
//

#ifndef ISTORAGE_H
#define ISTORAGE_H
#pragma once
#include "IBitAccessible.h"
#include "IBitAnalyzable.h"
#include "IBitCopyable.h"
#include "IByteAccessible.h"
#include "IByteAnalyzable.h"
#include "IByteCopyable.h"
#include "IByteManipulable.h"
#include <memory>

#include "IBitManipulable.h"

class IStorage :
    public IBitAccessible,
    public IBitAnalyzable,
    public IBitCopyable,
    public IBitManipulable,
    public IByteAccessible,
    public IByteAnalyzable,
    public IByteCopyable,
    public IByteManipulable {
public:
    virtual ~IStorage() = default;

    // ===== MINIMAL FACTORY METHODS =====
    
    /// Simple cloning for arithmetic temporaries
    virtual std::unique_ptr<IStorage> Clone() const = 0;
};


#endif //ISTORAGE_H
